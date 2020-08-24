#ifndef CISC5595_PROCESS_TABLE_H
#define CISC5595_PROCESS_TABLE_H

// process_table.h
//
// Class definition for the process table in our operating system

#include <process.h>

#include <iostream>

class ProcessTable {
    public:

        // Initialize the process table with the maximum number
        // of processes allowed
        ProcessTable(int size=100);

        // Add public member functions here

        // To enable printing the object
        friend std::ostream& operator<<(std::ostream& os, const ProcessTable& t);

    private:
       // Add private member variables here
    };

#endif // CISC5595_PROCESS_TABLE_H