// process.cpp
//
// Include your implementation of the Process class here.

#include <string>
#include <iostream>
#include <sstream>

#include "process.h"
#include "nlohmann/json.hpp"

using namespace std;
 
Process::Process(const string& processName, int processId) 
{
    // Implement the constructor for the Process class here
}


const string& Process::processName() const
{
    // Add implementation here
}

void Process::setProcessName(const string& processName)
{
    // Add implementation here
}

const int Process::processId() const
{
    // Add implementation here
}

void Process::setProcessId(int processId)
{
    // Add implementation here
}


// Friend function to print the object.
// See https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/ for some 
// instructions on how to implement an operator<< function for your class.
//
// This function should convert the Process object to json (see to_json below), and then 
// print the json object to the output stream. 
//
// The resulting output should look like this:
//
// {"process_id":1,"process_name":"process1"}
//
std::ostream& operator<<(std::ostream& os, const Process& p)
{


    return os;
}

// Populate the given json object with the members of the Process object.
// See https://github.com/nlohmann/json/blob/develop/README.md#arbitrary-types-conversions
void to_json(nlohmann::json& j, const Process& p)
{   
}

// Given an input json object containing the keywords representing a process,
// populate the given Process object.
// See https://github.com/nlohmann/json/blob/develop/README.md#arbitrary-types-conversions

void from_json(const nlohmann::json& j, Process& p)
{
}