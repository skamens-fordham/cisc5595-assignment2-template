// load_table.cpp
// Program to load the process table from one or more input files
//
// Arguments:
//    --table_size <size> 

#include <getopt.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <iomanip>

#include "nlohmann/json.hpp"
#include "process_table.h"
#include "process.h"

using namespace std;

int
main(int argc, char ** argv)
{

    // Table size defaults to 100 if not specified on the command line
    int tableSize = 100;

    // Process command line arguments
    //
    // Use the getopt_long function to accept an optional command line
    // argument "table_size". 
    //
    // For info on getopt_long use "man getopt_long" on a Linux host, 
    // or see https://linux.die.net/man/3/getopt_long
    //
    // Make sure to handle appropriate error conditions of the getopt_long
    // call.
    

    // Initialize a ProcessTable with the table size obtained via
    // the command-line arguments
    ProcessTable table(tableSize);

    // The rest of the arguments will be files in json format containing 
    // specifications for processes to be added to the table.

    // after the getopt_long call, optind will be the index of the
    // next argument to read.

    for (; optind < argc; ++optind) {
        
        // Create a std::ifstream using the input file name.
        // For an example, see https://www.oreilly.com/library/view/c-in-a/059600298X/re556.html
        


        // Read from the ifstream into an nlohman::json object.
        // See https://github.com/nlohmann/json/blob/develop/README.md#serialization--deserialization for 
        // details. Make sure to handle any errors caused by badly formatted json files.
        


        // Iterate the contents of the input json, converting each entry into a 
        // Process object. Add those Process objects into the ProcessTable.
        // See https://github.com/nlohmann/json/blob/develop/README.md#stl-like-access for details
        // on how to iterate the json object
        
    }

    // Print the contents of the table to cout

    std::cout << std::setw(4) << table << std::endl;


    return 0;
}