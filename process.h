#ifndef CISC5595_PROCESS_H
#define CISC5595_PROCESS_H

// process.h
//
// Class definition for a simulated process in our operating system
//

#include <iostream>

#include "nlohmann/json.hpp"

class Process {
    public:

        // Define appropriate constructors and setter/getter functions here


        // This function will enable printing the Process using 
        // a construct like
        //    cout << process
        // The output should include all of the data members of the class
        // printed on a single line.
        friend std::ostream& operator<<(std::ostream& os, const Process& p);


    private:
        // Include private member data here
};

// These methods will be used to populate a process object from
// json input files, or to output the json representation of a process
// object.
//
// See https://github.com/nlohmann/json/blob/develop/README.md#arbitrary-types-conversions
// for details on how to implement these functions

void to_json(nlohmann::json& j, const Process& p);
void from_json(const nlohmann::json& j, Process& p);

#endif // CISC5595_PROCESS_H