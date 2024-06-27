import subprocess
import sys

PRODUCTION_RULES_ARRAY = [6,7,8,9,10,11,12,13,14,15,16,17,18]
VARIABLES_ARRAY = [
    "scalar",
    "array",
    "vector",
    "list",
]
ITERATIONS_ARRAY = [1,3,5,7,9,11,12]

def compile(number_of_iterations, pr_number, variable_type, ext="cpp"):
    pr_string = f"production_rules/production_rule_{pr_number}.txt"
    ss_string = "seed_strings/seed_string.txt"
    output = f"./results/output_{number_of_iterations}_{pr_number}_{variable_type}.{ext}"
    program = "./../../gen/main"
    print(f"""
############################################################
COMPILING {number_of_iterations} {pr_string} {variable_type}""")
    subprocess.run([program, f"{number_of_iterations}", pr_string, ss_string, output, variable_type], check=True)
    print("############################################################")

def generate_examples_1(its=ITERATIONS_ARRAY[-1]):
    for pr_number in PRODUCTION_RULES_ARRAY:
        for variable_type in VARIABLES_ARRAY:
            try:
                compile(its, pr_number, variable_type, "cpp")
            except Exception as e:
                print(e)
                print(f"Error with {its} {pr_number} {variable_type}")
                sys.exit(1)

def generate_examples_2():
    variable_type = "scalar"
    for pr_number in PRODUCTION_RULES_ARRAY:
        for number_of_iterations in ITERATIONS_ARRAY:
            try:
                compile(number_of_iterations, pr_number, variable_type, "c")
            except Exception as e:
                print(e)
                print(f"Error with {number_of_iterations} {pr_number} {variable_type}")
                sys.exit(1)

def generate_examples_3(its=ITERATIONS_ARRAY[-1]):
    var_len = len(VARIABLES_ARRAY)
    sub_pr_array = PRODUCTION_RULES_ARRAY[:var_len]
    for i, pr_number in enumerate(reversed(sub_pr_array)):
            try:
                compile(its, pr_number, VARIABLES_ARRAY[i], "cpp")
            except Exception as e:
                print(e)
                print(f"Error with {its} {pr_number} {VARIABLES_ARRAY[i]}")
                sys.exit(1)

def generate_example_4(its=ITERATIONS_ARRAY[-1], variable_type=VARIABLES_ARRAY[0]):
    for pr_number in PRODUCTION_RULES_ARRAY[:9]:
        try:
            if variable_type == "scalar" or variable_type == "array":
                ext = "c"
            else:
                ext = "cpp"
            compile(its, pr_number, variable_type, ext)
        except Exception as e:
            print(e)
            print(f"Error with {its} {pr_number} {variable_type}")
            sys.exit(1)

subprocess.run(["mkdir results"], shell=True, stderr=subprocess.DEVNULL)
example = sys.argv[1]
if example == "1":
    its = sys.argv[2]
    if its:
        its = int(its)
        generate_examples_1(its)
    else:
        generate_examples_1()
elif example == "2":
    generate_examples_2()
elif example == "3":
    its = sys.argv[2]
    if its:
        its = int(its)
        generate_examples_3(its)
    else:
        generate_examples_3()
elif example == "4":
    its = sys.argv[2]
    var = sys.argv[3]
    if its and var:
        its = int(its)
        generate_example_4(its, var)
    else:
        generate_example_4()
else:
    print("Invalid example number")
    sys.exit(1)