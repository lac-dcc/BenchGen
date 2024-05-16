import subprocess
import sys

NUMBER_OF_SEED_STRINGS = 4
NUMBER_OF_PRODUCTION_RULES = 4
VARIABLES_ARRAY = [
    "scalar",
    "array",
    "vector",
    "list",
]
ITERATIONS_ARRAY = [0,2,4,6,8,10]

def compile(number_of_iterations, pr_number, ss_number, variable_type, ext="cpp"):
    pr_string = f"production_rule_{pr_number}.l"
    ss_string = f"seed_string_{ss_number}.l"
    output = f"./programs/output_{number_of_iterations}_{pr_number}_{ss_number}_{variable_type}.{ext}"
    program = "./../main"
    print(f"""
############################################################
COMPILING {number_of_iterations} {pr_string} {ss_string} {variable_type}""")
    subprocess.run([program, f"{number_of_iterations}", pr_string, ss_string, output, variable_type], check=True)
    print("############################################################")

def generate_examples_1():
    for ss_number in range(0,NUMBER_OF_SEED_STRINGS):
        for pr_number in range(0,NUMBER_OF_PRODUCTION_RULES):
            for variable_type in VARIABLES_ARRAY:
                iterations = ITERATIONS_ARRAY[-1]
                try:
                    compile(iterations, pr_number, ss_number, variable_type)
                except Exception as e:
                    print(e)
                    print(f"Error with {iterations} {pr_number} {ss_number} {variable_type}")
                    sys.exit(1)

def generate_examples_2():
    variable_type = "scalar"
    for ss_number in range(0,NUMBER_OF_SEED_STRINGS):
        for pr_number in range(0,NUMBER_OF_PRODUCTION_RULES):
            for number_of_iterations in ITERATIONS_ARRAY:
                try:
                    compile(number_of_iterations, pr_number, ss_number, variable_type, "c")
                except Exception as e:
                    print(e)
                    print(f"Error with {number_of_iterations} {pr_number} {ss_number} {variable_type}")
                    sys.exit(1)

example = sys.argv[1]
if example == "1":
    generate_examples_1()
elif example == "2":
    generate_examples_2()
else:
    print("Invalid example number")
    sys.exit(1)