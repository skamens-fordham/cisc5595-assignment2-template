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

    // Table size defaults to 100 if not specified on the command line
    int tableSize = 100;


    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return(3);
    }
        
    // Open the input file. 
    ifstream in(argv[1]);
    if (! in.good()) {
        cerr << "Failed to open file " << argv[1] << endl;
        return(4);
    }

    nlohmann::json input_json;

    // Read the file into the json object.
    // If the input file is not in json format, this will
    // throw an exception

    try {
        in >> input_json;
    } catch (nlohmann::json::exception& e) {
        cerr << "Error: " << e.what() << endl
             << "exception id: " << e.id << endl;
        return(5);
    }

    if (input_json.contains("table_size")) {
        tableSize = input_json["table_size"];
    }

    // Initialize a ProcessTable with the table size obtained via
    // the command-line arguments
    ProcessTable table(tableSize);

    // Iterate the actions in the input json,
    // processing each action in turn.
    // After each action, the entire process table
    // is printed

    for(auto action = input_json["actions"].begin(); 
            action != input_json["actions"].end();
            ++action) {
            
        if (! action->contains("action")) {
            cerr << "Error: No 'action' keyword found in input: " << *action << endl;
            return(6);
        }

        if (action->at("action") == "add_process") {
            Process p;

            // Note that if there is an extra unrecogized keyword
            // in the input json, it will simply be ignored, and no
            // exception will be thrown.
            try {
                action->get_to(p);
            } catch (nlohmann::json::exception& e) {
                // output exception information
                cerr << "Error: " << e.what() << endl
                     << "exception id: " << e.id << std::endl;
                return(6);
            } catch (std::invalid_argument& e) {
                cerr << "Error: " << e.what() << endl;
                return(7);
            }

            if (!table.add(p)) {
                cerr << "Failed to add process: " << p.processName() << endl;
                return(8);
            }
        } else if (action->at("action") == "remove_process") {
            Process p;

            if (! action->contains("process_id")) {
                cerr << "Error: 'remove_process' action requires 'process_id': " << *action << endl;
                return(9);
            }

            int process_id = (*action)["process_id"];

            if (! table.remove(process_id)) {
                cerr << "Error removing process_id " << process_id << endl;
                return(10);
            }
        }        
    
        cout << table;
        cout << endl;

    }

    return 0;
}