import subprocess
import csv
import argparse
import os
import pandas as pd
def merge(dir_path, output_name):
    df_final = pd.DataFrame()
    if os.path.isdir(dir_path):
        for sheet in os.listdir(dir_path):
            df = pd.read_csv(os.path.join(dir_path, sheet))
            line = df.iloc[:, 1:].sum()
            name = sheet.split('.b')[0]
            new_data = pd.concat([pd.Series([f'{name}'], index=['program']), line])
            df_final = pd.concat([df_final, pd.DataFrame(new_data).T])
    df_final.to_csv(f'{output_name}.csv', index=False)
                
if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Merge the results produced by the Pass') 
    parser.add_argument('dir_path', help='Directory with the csv files you are intrested to merge.')
    parser.add_argument('output_name', help='Name of the final csv file.')
    args = parser.parse_args()
    merge(args.dir_path, args.output_name)