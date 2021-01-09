# Operating Systems Assignment 2 - Process Table
A key data structure in any operating system is the process table. This table contains information about all progress in the system, and is used by other system components for such things as scheduling and process management. For this assignment, you will write classes for a Process and a ProcessTable, which will be used for this and future assignments.
# JSON
This (and future) assignments will read input files and generate output in JSON format. The starter files include the nlohmann JSON header file, which you will incorporate into your code using
```
#include <nlohmann/json.hpp>
```
For details on how to use this json library, see https://github.com/nlohmann/json/blob/develop/README.md. 
# Process
The basic data structure for our operating system will be the Process class. For this assignment, each process will have the following attributes:
* Process Name (string) - required
* Process ID (integer) - optional (until it is added to a ProcessTable)

In later assignments we will add additional attributes as needed.

# Process Table
The process table will contain all of the processes in the operating system. The primary data member in the ProcessTable class will be a fixed size array of process objects.

The ProcessTable class is also responsible for assigning process ID's to each process added. The process ID should be based on the process's position in the Process array, starting from 1 (the first element in the array should have process ID 1, the second would be process ID 2, etc.)

# execute
The main program for your assignment is called `execute`. This program will read an input file in JSON format that contains a set of actions that the program should perform. 

## Input file
There is a sample input file (called `sample_input.json`) with your template files. Here is a walkthrough of this file's contents:

### Options
The first part of the file will be a set of parameters and options related to the program's execution. For this first assignment, the only supported option is `table_size`:
```json
"options" : {
  "table_size" : 3
}, 
```
This tells you to allocate a ProcessTable of size 3.

### Actions
Following the `options` section is a list called `actions`, which gives a series of actions that the program should execute.

#### `add_process`
The `add_process` action instructs you to add a process to the ProcessTable with a given `process_name`, as follows:
```json
[{
  "action" : "add_process",
  "process_name": "process1"
},
```
### `remove_process`
The `remove_process` action instructs you to remove a process with a given `process_id`, as follows:
```json
{
  "action": "remove_process",
  "process_id" : 1
},
```
# Implementation
The template files for this assignment include appropriate files for either C++ or Python; you may choose to use either language. Follow the detailed instructions found in the comments to implement this project.
## C++
* `process.h` and `process.cpp` - Process class
* `process_table.h` and `process_table.cpp` - ProcessTable class
* `execute.cpp`- main program
* `Makefile` - used to compile and link the `execute` program
## Python
* `process.py` - Process class
* `process_table.py` - ProcessTable class
* `execute.py` - main program