#!/usr/bin/python3

from process import Process
from process_table import ProcessTable

import json
import sys

def main():

    table_size = 100

    # First read the input file

    if (len(sys.argv) != 2) :
        sys.exit("Usage: " + sys.argv[0] + " <input file>")

    input = {}

    with open(sys.argv[1]) as f:
        input = json.load(f)

    if input['table_size'] :
        table_size = input['table_size']

    table = ProcessTable(table_size)

    for action in input['actions']:
        if action['action'] == "add_process":
            new_id = table.add(action['process_name'])
            if new_id == -1:
                sys.exit("Error adding process. action=" + action.__str__())
        elif action['action'] == 'remove_process':
            table.remove(action['process_id'])

        print(table, "\n")
    return 0

if __name__ == "__main__":
    main()
