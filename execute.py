#!/usr/bin/python3

from process import Process
from process_table import ProcessTable

import json
import sys

def main():

    # This program should accept a single command line argument, which is the
    # name of the input file to use.
    #      $ execute.py <input_file>
    #
    # Check that the argument has been provided by the caller; if no argument is
    # given, print an error message and exit.




    input = {}

    #
    # Read the input file into the 'input' dict (above)
    #
    # See https://docs.python.org/3/library/json.html for instructions
    # on how to use the JSON API in Python
    # 




    table_size = 100 # The table_size defaults to 100 if it's not provided in the input

    # Handle the options element in the input.
    # This entry will look like this:
    #    "options" : {
	#   	 "table_size" : 3
	#    }
    #
    # If options.table_size is found, set the table_size to its value


    # Allocate a process table using the given table size
    table = ProcessTable(table_size)


    # The actions list looks like this:

    # "actions" : 
	# [{
	# 	  "action" : "add_process",
	#    "process_name": "process1"
	# },
	# {
	#    "action" : "add_process",
	# 	  "process_name": "process2"
	# },
    # 	{
	# 	  "action": "remove_process",
	# 	  "process_id" : 1
	# }]


    # Iterate the set of actions
    #
    # For each action found, perform the requested action and print the entire
    # process table, followed by a blank line.
    #
    # So for the brief set of actions shown above, the output should look
    # like this:
    #
    # {"process_id":1,"process_name":"process1"}

    # {"process_id":1,"process_name":"process1"}
    # {"process_id":2,"process_name":"process2"}

    # {"process_id":2,"process_name":"process2"}

    

    for action in : # Iterate all actions
        if : # The action is "add_process"
            # Add the new Process to the process table.
            # If the add is not successful, print an error
            # message and exit
        elif : # The action is "remove_process"
            # Find the process ID to be removed 
            # Call table.remove() with that process ID
            # If the process can not be removed, print an error message
            # and exit.

        # After executing each action, print the 
        # process table, followed by a blank line
    return 0

if __name__ == "__main__":
    main()
