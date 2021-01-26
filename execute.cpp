// execute.cpp
// Program to execute the instructions in an input file


#include <string>
#include <fstream>
#include <iostream>

#include "nlohmann/json.hpp"
#include "process_table.h"
#include "process.h"

using namespace std;


int
main(int argc, char ** argv)
{


    // This program should accept a single command line argument, which is the
    // name of the input file to use.
    //      $ execute <input_file>
    //
    // Check that the argument has been provided by the caller; if no argument is
    // given, print an error message and exit.
    




    nlohmann::json input_json;

    // Read the input file into the input_json object
    // See https://github.com/nlohmann/json for details on how
    // to load a json file from a file.
    //
    // If possible, handle the situation where the input file
    // is not valid json. See https://json.nlohmann.me/features/parsing/parse_exceptions/
    // for some hints on how to take this situation into account.






    // Handle the "options:" section of the input json.
    // 
    // This entry will look like this:
    //    "options" : {
	//   	 "table_size" : 3
	//    }
    //

    // Table size defaults to 100 if not specified in the input file
    int tableSize = 100;

    // Check if the "options" section is there, and if it is,
    // also check if "table_size" is inside it; if so,
    // set the tableSize variable to the value from
    // the input file.





    // Initialize a ProcessTable with the table size obtained via
    // the command-line arguments
    ProcessTable table(tableSize);



    // The actions list looks like this:

    // "actions" : 
	// [{
	// 	  "action" : "add_process",
	//    "process_name": "process1"
	// },
	// {
	//    "action" : "add_process",
	// 	  "process_name": "process2"
	// },
    // 	{
	// 	  "action": "remove_process",
	// 	  "process_id" : 1
	// }]


    // Iterate the set of actions
    // (see https://json.nlohmann.me/features/iterators/ for some information
    // on how to iterate)
    //
    // For each action found, perform the requested action and print the entire
    // process table, followed by a blank line.
    //
    // So for the brief set of actions shown above, the output should look
    // like this:
    //
    // {"process_id":1,"process_name":"process1"}

    // {"process_id":1,"process_name":"process1"}
    // {"process_id":2,"process_name":"process2"}
// 
    // {"process_id":2,"process_name":"process2"}

    

    for(/* each action */ ) {
            
        if (/* the action specified is "add_process" */) {
           
           // Create a new Process object whose process
           // name is the one indicated in the action.
           //
           // Add that process to the table using table.add()
           // If the add() call fails, print an error message and exit

        } else if (/* the action specified is "remove_process" */) {
            
            // Find the process ID in the action segment
            // 
            // call table.remove() on that process ID
            // If the call to remove() fails, print an error message and exit
        }        
    
        // Print the entire contents of the table, followed by a blank line

    }

    return 0;
}