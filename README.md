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
There is a sample input file (called `sample_input.json`) with your template files. Along with the input file is a [JSON Schema File ](https://json-schema.org/) (`assignment2-input-schema.json`) that describes the file contents. If you edit your files using an IDE such as VSCode, the IDE can assist with proper formatting.

Here is a walkthrough of this file's contents:

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
# Submit Your Assignment
To submit your assignment, follow the same steps that you took for assignment 1:
## Commit your code in git

```
skamens@Sam:~/os-a2-skamens-fordham$ git add -A # This stages all changed files
skamens@Sam:~/os-a2-skamens-fordham$ git commit
[main 460b567] main
 1 file changed, 1 deletion(-)
```
## Push your code to Github

```
skamens@Sam:~/os-a2-skamens-fordham$ git push
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 4 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 279 bytes | 279.00 KiB/s, done.
Total 3 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/skamens-fordham-org/os-a2-skamens-fordham
   1a6667e..460b567  main -> main
```
In VSCode you can use the built-in git tools to commit and push without using the command line.
## Submit your assignment to Blackboard
In order to match your assignment to the grading system, each assignment must be "submitted" in Blackboard. This indicates that you consider your assignment ready to be graded. In addition, you will be able to see the detailed rubric for each assignment after grading is complete.

## Fill in the submission file
Fill in the information in the file `submit.txt`. The contents of the file are as follows:

```
Operating Systems, Spring 2021
Assignment 2

Please fill in the information below and submit this file to Blackboard to turn in your assignment.

Your Name:
Email Address:
Link to your Github Repository: 
```
## Upload the file to Blackboard
Click on the [Assignment Link](https://fordham.blackboard.com/webapps/assignment/uploadAssignment?content_id=_3599499_1&course_id=_6112339_1)

## Click "Browse Local Files"

Select and upload your `submit.txt` file, and click `Submit` (at the bottom of the screen)

_Note: You could also click `Write Submission` and simply enter the contents of `submit.txt` in the text box before clicking `Submit`_

