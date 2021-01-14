
# The ProcessTable class contains all of the processes in the system.

# The internal table of processes is represented as a circular buffer
# It will be a list of a fixed number of processes which will be filled
# in sequentially. When the last process in the list is populated,
# the structure wraps around to add values from the beginning

from process import Process

class ProcessTable:

    # Constructor
    # The constructor takes the size that the table should be.
    def __init__(self, tableSize=100):
        self.table_size = tableSize
        self.table = []

        # Initialize any other class variables you need to
        # implement your table


        # Add entries to the self.table list so that it
        # has exactly "tableSize" entries. Make sure the
        # entries are initialized to empty (i.e. a process
        # name of "" and a process ID of -1) .
        #
        # This list should not grow in size after this
        # constructur runs



    def getSize(self):
        # Return the table size


    # Add a process to the table by name
    # Returns the process ID of the table, or
    # -1 if the process can not be added.
    def add(self, process_name):
        # Implement the algorithm to add a process to the table.
        # Processes should be added starting at position 0
        # in the array, with subsequent entries being added
        # in order.
        #
        # If a Process is successfully added, return its process ID 
        # (remember that process ID's are tied to the location in
        # the array, starting at 1).
        #
        # If a process can not be added because the table is full,
        # return -1.
        #
        # Some examples are below, assuming a process table size of 5.
        # Key:
        #     -     empty slot
        #     *     full slot
        #     +     full slot; this is the most recently added process
        #     @     Place where the new one is added
        #
        #
        # Before: - - - - -
        # After: @ - - - - (return 1)
        #
        # Before: * * + - - 
        # After: * * + @ - (return 4)
        #
        # Before: * * - + -
        # After: * * - + @ (return 5)
        #
        # Before: * * - * +
        # After: * * @ * + (return 3)
        #
        # Before: * * * * +
        # After: * * * * + (return -1)
       


    def remove(self, process_id):
        # Implement the algorithm to remove a process from 
        # the process table.
        #
        # A process is removed by finding the Process
        # in the process table that should be removed,
        # and setting its name to "" and its process ID to -1
        #
        # If the process was successfully removed, return True.
        # If the processID is out of range, or it slot is already
        # empty, return False




    def find(self, process_id):
        # Find the slot in the process table associated with the
        # given process ID. 
        # 
        # If that slot is not empty, return the process
        # that is at that position.
        #
        # If that slot is empty, return NULL

    
    
    # Method that is called when someone calls print() on a ProcessTable.
    def __str__(self):
        s = ""
        
        # This method should iterate through the process table in order. 
        # If the process in each position is empty, skip it.
        # If the process in the current position is non-empty, append
        # the output of its __str__() method to the result string (s)
        #
        # For a process table with two entries, the result
        # should look like this:
        # {"process_id":1,"process_name":"process1"}
        # {"process_id":2,"process_name":"process2"}
         
        
        return s

