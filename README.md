# CISC5595 Assignment 2 - Process Table
A key data structure in any operating system is the process table. This table contains information about all progress in the system, and is used by other system components for such things as scheduling and process management. For this assignment, you will write classes for a Process and a ProcessTable, which will be used for this and future assignments.
# JSON
This (and future) assignments will use configuration files in JSON format. The starter files include the nlohmann JSON header file, which you will incorporate into your code using
```
#include <nlohmann/json.hpp>
```
For details on how to use this json library, see https://github.com/nlohmann/json/blob/develop/README.md. 
# Process
The basic data structure for our operating system will be the Process class. For this assignment, each process will have the following attributes:
* Process Name (string)
* Process ID (integer)

In later assignments we will add additional attributes as needed.

Implement the Process class, following the comments in the provided header file as well as these instructions. The class should have:
* Appropriate constructors (and destructors, if necessary)
* methods to set and get the attributes of the process
* A way to print the process object
* A way to convert a process object to and from json

# Process Table
The process table will contain all of the processes in the operating system. Although in general we will use advanced data structures, in this case please implement your process table as a circular array. Your process table should take the size of the process table as a parameter to the constructor, and should then allocate an array of that size to hold all of the processes in the system. Note that process ID's should start at 1 (not 0). Processes should be allocated sequentially; after reaching the end of the array, they should go back and start over with process number 1.

Implement the ProcessTable class. It should have the following capabilities:
* A constructor, as noted above, that takes the size of the table as a parameter
* A destructor
* A method to add a process to the table, as follows:
  * Find the next empty slot in the process table
  * Insert the Process at that spot
  * Set the process ID of the Process in the Process object itself
  * return the process ID 
  * If the Process can not be inserted, return an error code
* A method to remove a process from the table
  * You will need to have a way to indicate that a process slot is empty
  * If the process is not found, return an appropriate error code
* A method to find a Process given its process ID
  * Return the process, or an error if the process isn't found.
* A way to print the ProcessTable to an iostream

# Test your code
The file `process_test.cpp` is included in the template directory. You should create a set of tests in this file that exercise all of the aspects of the classes you have implemented. Include failure test cases as well.

# load_table.cpp
The file `load_table.cpp` is included in your starter files. This program will read a json input file that contains a set of process definitions, and then print the resulting process table using the method implemented in the ProcessTable class. Follow the detailed comments in this file to implement the program as indicated.