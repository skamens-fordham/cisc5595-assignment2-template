CPPFLAGS = -g -I.

libsrc = process.cpp process_table.cpp
libobj = $(libsrc:.cpp=.o)

all: process_test load_table

process_test: process_test.o $(libobj)
	$(CXX) -o $@ process_test.o $(libobj)

load_table: load_table.o $(libobj)
	$(CXX) -o $@ load_table.o $(libobj)

.PHONY: clean
clean:
	rm -f $(libobj) process_test.o process_test load_table.o load_table