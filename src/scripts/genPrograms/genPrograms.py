import subprocess
import os
import argparse
import sys

def genPrograms(generator_bin, input_dir, var_type, max_iterations):
    os.makedirs('programs', exist_ok=True)
    
    for iteration in range(int(max_iterations)+1):
        if os.path.isdir(input_dir):
            for program in os.listdir(input_dir):
                program_dir = os.path.join(input_dir, program)
                prod_rule = os.path.join(program_dir, "production_rule.txt")
                seed_string = os.path.join(program_dir, "seed_string.txt")
                
                if not os.path.isfile(prod_rule) or not os.path.isfile(seed_string):
                    print(f'Skipping {program}: production_rule.txt or seed_string.txt not found.')
                    continue
                
                program_destiny = os.path.join('programs', f'{program}_{iteration}')
                
                try:
                    print(f'Running {program} for {iteration} iterations...')
                    result = subprocess.run(
                        [generator_bin, str(iteration), prod_rule, seed_string, f'{program}_{iteration}', var_type],
                        stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
                    )
                    subprocess.run(f'mv {program}_{iteration} {program_destiny}', shell=True)
                    if result.returncode != 0:
                        print(f'Error running {program}: {result.stderr}')
                    else:
                        print(f'Successfully ran {program} for {iteration} iterations.')
                except Exception as e:
                    print(f'Exception occurred: {e}')

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Creates a sample of programs given the rules.')
    parser.add_argument('generator_bin', help='Path to executable generator.')
    parser.add_argument('input_dir', help='Path to the set of production rules and seed strings.')
    parser.add_argument('var_type', help='Variable type.')
    parser.add_argument('max_iterations', help='Number of max iterations.')
    args = parser.parse_args()
    
    genPrograms(args.generator_bin, args.input_dir, args.var_type, args.max_iterations)
