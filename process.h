#ifndef OS_PROCESS_H
#define OS_PROCESS_H

// process.h
//
// Class definition for a simulated process in our operating system
//

#include <iostream>
#include <string>

#include "nlohmann/json.hpp"


class Process {
    public:

        // Constructor. The values default to an empty name and a process
        // ID of -1.
        Process(const std::string& processName = "", int processId = -1 );

        // Setters and getters
        const std::string& processName() const;
        void setProcessName(const std::string& processName);

        const int processId() const;
        void setProcessId(int processId);

        // This function will enable printing the Process using 
        // a construct like
        //    cout << process
        // The process should be printed using json format.
        friend std::ostream& operator<<(std::ostream& os, const Process& p);


    private:
        // Include private member data here

        int m_processId;
        std::string m_processName;
};

// These methods will be used to populate a process object from
// json input files, or to output the json representation of a process
// object.
//
// See https://github.com/nlohmann/json/blob/develop/README.md#arbitrary-types-conversions
// for details on how to implement these functions

void to_json(nlohmann::json& j, const Process& p);
void from_json(const nlohmann::json& j, Process& p);

#endif // OS_PROCESS_H