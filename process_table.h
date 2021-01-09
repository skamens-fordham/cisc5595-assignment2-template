#ifndef OS_PROCESS_TABLE_H
#define OS_PROCESS_TABLE_H

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
        ~ProcessTable();

        // Add public member functions here
        int getSize();
        int add(const Process& p);
        bool remove(int processId);
        Process& find(int processId);

        // To enable printing the object
        // This function should print each of the non-empty processes in 
        // the table using their operator<< methods
        friend std::ostream& operator<<(std::ostream& os, const ProcessTable& t);

    private:
       // Add private member variables here

       int m_tableSize;
       Process * m_processTable;

       int m_currentIdx;
    };

#endif // OS_PROCESS_TABLE_H