CPPFLAGS = -g -I.

libsrc = process.cpp process_table.cpp
libobj = $(libsrc:.cpp=.o)

all: execute

execute: execute.o $(libobj)
	$(CXX) -o $@ execute.o $(libobj)

.PHONY: clean
clean:
	rm -f $(libobj) execute.o execute