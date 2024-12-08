import re
import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import os

def parse_file(file_path):
    """
    @brief Parses the analysis file to extract program classifications.

    Args:
        file_path (str): Path to the file containing program analysis results.

    Returns:
        dict: A dictionary where the keys are program IDs and the values are their classifications.
    """
    with open(file_path, 'r') as file:
        lines = file.readlines()
        program_classes = {}
    for line in lines[6:]:
        match = re.match(r"(\d+):\s+(.*)!", line)
        if match:
            program_num = int(match.group(1))
            classification = match.group(2).strip()
            program_classes[program_num] = classification    
    return program_classes

def create_density_plot(program_classes, output_path, result):
    """
    @brief Creates and saves a density plot for programs classified as "EMPTY", "DOES NOT GROW" or "SUCCESS".

    Args:
        program_classes (dict): A dictionary with program IDs and their classifications.
        output_path (str): Path to save the generated density plot image.
    """
    result_programs = [program for program, classification in program_classes.items() if classification == result]
    plt.figure(figsize=(12, 6))
    sns.kdeplot(result_programs, bw_adjust=0.5, fill=True, color="blue", alpha=0.3)
    sns.kdeplot(result_programs, bw_adjust=0.5, color="blue", alpha=0.7, linewidth=2)
    plt.title("Density Plot of Empty Programs")
    plt.xlabel("Program ID")
    plt.ylabel("Density")
    plt.grid(axis="y", linestyle="--", alpha=0.7)
    os.makedirs(os.path.dirname(output_path), exist_ok=True)    
    plt.savefig(output_path)
    plt.close()

if __name__ == "__main__":
    file_path = "results/programsAnalysis.txt"
    output_image_path = "results/densityplot_empty.jpg"
    program_classes = parse_file(file_path)
    create_density_plot(program_classes, output_image_path, "EMPTY")
    print(f"Density plot saved to {output_image_path}")
    
    output_image_path = "results/densityplot_does_not_grow.jpg"
    program_classes = parse_file(file_path)
    create_density_plot(program_classes, output_image_path, "DOES NOT GROW")
    print(f"Density plot saved to {output_image_path}")

    output_image_path = "results/densityplot_success.jpg"
    program_classes = parse_file(file_path)
    create_density_plot(program_classes, output_image_path, "SUCCESS")
    print(f"Density plot saved to {output_image_path}")
