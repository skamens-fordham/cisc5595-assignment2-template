// process_table.cpp
//
// Implementation of the ProcessTable class

#include "process_table.h"
#include "process.h"

#include <string>
#include <iostream>

using namespace std;

ProcessTable::ProcessTable(int size)
{
    // Implement the constructor for the ProcessTable class.
    // This should allocate the array of Processes,
    // save the table size, and initialize any other varible 

}


ProcessTable::~ProcessTable()
{
    // Clean up memory that was allocated in the constructor
}

int
ProcessTable::getSize() 
{
    // Add implementation here
}

int
ProcessTable::add(const Process& p)
{
    // Implement the algorithm to add a process to the table.
    // Processes should be added starting at position 0
    // in the array, with subsequent entries being added
    // in order.
    //
    // If a Process is successfully added, return its process ID 
    // (remember that process ID's are tied to the location in
    // the array, starting at 1).
    //
    // If a process can not be added because the table is full,
    // return -1.
    //
    // Some examples are below, assuming a process table size of 5.
    // Key:
    //     -     empty slot
    //     *     full slot
    //     +     full slot; this is the most recently added process
    //     @     Place where the new one is added
    //
    //
    // Before: - - - - -
    // After: @ - - - - (return 1)
    //
    // Before: * * + - - 
    // After: * * + @ - (return 4)
    //
    // Before: * * - + -
    // After: * * - + @ (return 5)
    //
    // Before: * * - * +
    // After: * * @ * + (return 3)
    //
    // Before: * * * * +
    // After: * * * * + (return -1)
    
}


bool ProcessTable::remove(int processId)
{
    // Implement the algorithm to remove a process from 
    // the process table.
    //
    // A process is removed by finding the Process
    // in the process table that should be removed,
    // and setting its name to "" and its process ID to -1
    //
    // If the process was successfully removed, return true.
    // If the processID is out of range, or it slot is already
    // empty, return false
    
}

Process* ProcessTable::find(int processId)
{
    // Find the slot in the process table associated with the
    // given process ID. 
    // 
    // If that slot is not empty, return a pointer to 
    // the process in that position.
    //
    // If that slot is empty, return NULL
}

// Friend function to print the object
std::ostream& operator<<(std::ostream& os, const ProcessTable& t)
{
    // iterate through the process table in order. 
    // If the process in each position is empty, skip it.
    // If the process in the current position is non-empty, print it
    // on a single line using its operator<< method:
    //    os << process;
    //
    // For a process table with two entries, the output
    // should look like this:
    // {"process_id":1,"process_name":"process1"}
    // {"process_id":2,"process_name":"process2"}


    return os;
}
