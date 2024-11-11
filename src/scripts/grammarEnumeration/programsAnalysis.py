import os
import argparse
import re
import subprocess

class Program:
    def __init__(self, number, seed_string, rule_a, rule_b):
        self.number = number
        self.seed_string = seed_string
        self.rule_a = rule_a
        self.rule_b = rule_b

    def __repr__(self):
        return f"Program(number={self.number}, seed_string='{self.seed_string}', rule_a='{self.rule_a}', rule_b='{self.rule_b}')"

def createProgramFiles(obj_folder, current_program):
    program = Program(
        current_program['number'],
        current_program['seed_string'],
        current_program['rule_a'],
        current_program['rule_b']
    )
    with open(os.path.join(obj_folder, "ss.txt"), "w") as ss_file:
        ss_file.write(program.seed_string)
    with open(os.path.join(obj_folder, "pr.txt"), "w") as pr_file:
        pr_file.write(f"A = {program.rule_a};\nB = {program.rule_b};")

def generateProgram():
    gen_folder = './../../gen'
    obj_folder_relative = './../scripts/grammarEnumeration/obj'
    subprocess.run(f"cd {gen_folder} && rm -r program", shell=True)
    subprocess.run(f"cd {gen_folder} && ./benchGen 5 {obj_folder_relative}/pr.txt {obj_folder_relative}/ss.txt program array", shell=True, stdout=subprocess.DEVNULL, check=True)
    return f"{gen_folder}/program"

def compileProgram(obj_folder, program_folder_path):
    stderr_temp = os.path.join(obj_folder, "stderr_temp.txt")
    with open(stderr_temp, "w") as stderr_temp:
        subprocess.run(f"cd {program_folder_path} && make && make llvm && mv ./ll/program.ll ./../../scripts/grammarEnumeration/obj", shell=True, check=True, stdout=subprocess.DEVNULL, stderr=stderr_temp)

def doAnalysis(program_number, analysis_file, obj_folder):
    stderr_temp = os.path.join(obj_folder, "stderr_temp.txt")
    with open(stderr_temp, "r") as stderr_temp:
        stderr = stderr_temp.read()
        if stderr:
            analysis_file.write(f"{program_number}: ERROR!\n")
            return 0
        else:
            isEmptyFile = os.path.join(obj_folder, "isEmpty.txt")
            with open(isEmptyFile, "w") as f:
                subprocess.run(f"./emptinessChecker.sh obj/program.ll", shell=True, stdout=f, stderr=subprocess.DEVNULL, check=True)
            with open(isEmptyFile, "r") as f:
                content = f.read()
                if content.strip() == "1":
                    analysis_file.write(f"{program_number}: EMPTY!\n")
                    return 1
                else:
                    analysis_file.write(f"{program_number}: OK!\n")
                    return 2

def analyzePrograms(path):
    file = os.path.join(path, "programs.txt")    
    analysis = os.path.join(path, "programsAnalysis.txt")
    obj_folder = os.path.join("./", "obj")
    os.makedirs(obj_folder, exist_ok=True)
    number_of_errors = 0
    number_of_successes = 0
    number_of_empty = 0
    with open(file, "r") as f:
        lineC = round((f.read().count('\n')) / 4)
    with open(file, "r") as f, open(analysis, "w") as analysis_file:
        current_program = {}
        for i, line in enumerate(f):
            line = line.strip()
            if re.match(r"^\d+:", line):
                current_program['number'] = int(line.split(":")[0].strip())
            elif line.startswith("SS:"):
                current_program['seed_string'] = line.split(":")[1].strip()
            elif line.startswith("A ="):
                current_program['rule_a'] = line.split("=")[1].strip().strip(";")
            elif line.startswith("B ="):
                current_program['rule_b'] = line.split("=")[1].strip().strip(";")
                createProgramFiles(obj_folder, current_program)
                program_folder_path = generateProgram()
                compileProgram(obj_folder, program_folder_path)
                result = doAnalysis(current_program["number"], analysis_file, obj_folder)
                if result == 0:
                    number_of_errors += 1
                elif result == 1:
                    number_of_empty += 1
                else:
                    number_of_successes += 1
                current_program = {}
                print("Program ", round((i + 1)/4), "/", lineC)
    with open(analysis, "r") as file:
        original_content = file.readlines()
    with open(analysis, "w") as file:
        total = number_of_successes + number_of_errors + number_of_empty
        p_success = round(number_of_successes / (total) * 100)
        p_errors = round(number_of_errors / (total) * 100)
        p_empty = round(number_of_empty / (total) * 100)
        file.write(f"Number of programs: {total}\n")
        file.write(f"% of successes: {p_success}%\n")
        file.write(f"% of errors: {p_errors}%\n")
        file.write(f"% of empty programs: {p_empty}%\n")
        file.write("\n")
        file.writelines(original_content)
                

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser(description='Analyzes the generated programs by the grammar enumerator.')
    parser.add_argument('--path', default="./results", help='Path to the folder where the programs.txt file is located. Defaults to "./results" if not provided.')
    args = parser.parse_args()
    analyzePrograms(args.path)