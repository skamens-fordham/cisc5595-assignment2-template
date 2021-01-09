// process_table.cpp
//
// Implementation of the ProcessTable class

#include "process_table.h"
#include "process.h"

#include <string>
#include <iostream>

using namespace std;

ProcessTable::ProcessTable(int size) :
    m_tableSize(size), m_currentIdx(-1), m_processTable(NULL)
{
    // Allocate the array of processes
    //
    // Note that the default constructor should run 
    // for each of the array elements

    m_processTable = new Process[m_tableSize];
}

ProcessTable::~ProcessTable()
{
    delete[] m_processTable;
}

int
ProcessTable::getSize() 
{
    return m_tableSize;
}

int
ProcessTable::add(const Process& p)
{
    // Start with the next index (currentIndex + 1)
    // Keep iterating until we reach currentIndex.
    // If we find an empty spot before we get back
    // around, that's our next spot.
    // 
    // Note the loop incrementer which has to 
    // get the remainder so i wraps around to 
    // 0 

    int newIdx = (m_currentIdx + 1) % m_tableSize;
    int i;
    for (i = 0; i < m_tableSize; i++)
    {
	if (m_processTable[newIdx].processId() == -1) {
	    break;
	}

         newIdx = (newIdx + 1) % m_tableSize;
    }

    if (i == m_tableSize) {
	// This means we got around to the beginning,
	// so there was no open slot
        return -1;
    }

    m_processTable[newIdx].setProcessId(newIdx + 1);
    m_processTable[newIdx].setProcessName(p.processName());
    m_currentIdx = newIdx;

    return m_processTable[newIdx].processId();
}


bool ProcessTable::remove(int processId)
{
    if (m_processTable[processId - 1].processId() == -1) {
        return false;
    }

    m_processTable[processId - 1].setProcessId(-1);
    m_processTable[processId - 1].setProcessName("");
    return true;
}

Process& ProcessTable::find(int processId)
{
    // Return this when we don't find the process id requested
    static Process notFound("", -1);

    if(m_processTable[processId - 1].processId() == -1) {
        return notFound;
    }

    return m_processTable[processId - 1];
}

// Friend function to print the object
std::ostream& operator<<(std::ostream& os, const ProcessTable& t)
{
    for (int i = 0; i < t.m_tableSize; ++i)
    {
        if (t.m_processTable[i].processId() != -1) {
            os << t.m_processTable[i] << endl;
        }
    }
    return os;
}
