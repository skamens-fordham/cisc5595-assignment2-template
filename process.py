
# The Process class represents a process in our system.

# When we print processes, we will print them in json format
import json

class Process:

    # Contructor - the default values for the member variables
    # are as indicated - an empty string for the process name,
    # and -1 for the process id
    def __init__(self, process_name="", process_id=-1):
        # Implement the constructor here

    
    # Set the process name 
    def setProcessName(self, process_name):
        # Add implementation here

    # Set the process ID
    def setProcessId(self, process_id):
        # Add implementation here

    # get the process name
    def processName(self):
        # Add implementation here
    
    # get the process id
    def processId(self):
        # Add implementation here

    # This method is called when print() is called. 
    # It should convert the contents of the object to json, and then dump the json format. 
    #
    # # See https://docs.python.org/3/library/json.html for documentation on using JSON
    # in Python.
    # Use the json.dumps() method to print your data, using Compact Encoding.
    #
    # The resulting output should look like this:
    #
    # {"process_id":1,"process_name":"process1"}
    # 
    def __str__(self):
        return json.dumps({"process_name" : self.process_name,
                           "process_id" : self.process_id}, 
                           separators = (",",":"), sort_keys = True)
