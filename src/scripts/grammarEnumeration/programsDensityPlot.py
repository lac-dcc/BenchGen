import re
import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import os

# Function to parse the text file
def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    # Extract the classifications for programs
    program_classes = {}
    for line in lines[6:]:  # Start reading from line 7 onward
        match = re.match(r"(\d+):\s+(.*)!", line)
        if match:
            program_num = int(match.group(1))
            classification = match.group(2).strip()
            program_classes[program_num] = classification
    
    return program_classes

# Function to create and save the density plot
def create_density_plot(program_classes, output_path):
    # Prepare data for the density plot
    empty_programs = [program for program, classification in program_classes.items() if classification == "EMPTY"]
    
    # Create the density plot using KDE
    plt.figure(figsize=(12, 6))
    sns.kdeplot(empty_programs, bw_adjust=0.5, fill=True, color="blue", alpha=0.3)
    sns.kdeplot(empty_programs, bw_adjust=0.5, color="blue", alpha=0.7, linewidth=2)
    
    # Customize the plot
    plt.title("Density Plot of Empty Programs")
    plt.xlabel("Program ID")
    plt.ylabel("Density")
    plt.grid(axis="y", linestyle="--", alpha=0.7)
    
    # Ensure output directory exists
    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    
    # Save the plot as an image
    plt.savefig(output_path)
    plt.close()

# Main execution
if __name__ == "__main__":
    # Update the file path to point to your text file
    file_path = "results/programsAnalysis.txt"
    output_image_path = "results/densityplot.jpg"
    
    program_classes = parse_file(file_path)
    create_density_plot(program_classes, output_image_path)
    
    print(f"Density plot saved to {output_image_path}")
