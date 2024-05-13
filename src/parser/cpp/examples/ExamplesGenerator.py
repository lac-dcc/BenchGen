import subprocess

NUMBER_OF_SEED_STRINGS = 4
NUMBER_OF_PRODUCTION_RULES = 4
VARIABLES_ARRAY = [
    "scalar",
    "array",
    "vector",
    "list",
]
ITERATIONS_ARRAY = [15]

def generate_examples():
    for nss in range(0,NUMBER_OF_SEED_STRINGS):
        for npr in range(0,NUMBER_OF_PRODUCTION_RULES):
            for va in VARIABLES_ARRAY:
                for i in ITERATIONS_ARRAY:
                    pr = f"production_rule_{npr}.l"
                    seed = f"seed_string_{nss}.l"
                    output = f"./programs/output_{i}_{npr}_{nss}_{va}.cpp"
                    program = "./../main"
                    print(f"""
############################################################
COMPILING {i} {pr} {seed} {va}""")
                    try:
                        subprocess.run([program, f"{i}", pr, seed, output, va], check=True)
                        print("############################################################")
                    except Exception as e:
                        print(f"\nERROR WITH COMMAND: \"{program} {i} {pr} {seed} {output} {va}\"\n")
                        print(e)
                        return

generate_examples()