CPPFLAGS = -g -I.
LDFLAGS = -L. -lprocess

libsrc = process.cpp process_table.cpp
libobj = $(libsrc:.cpp=.o)

all: process_test load_table libprocess.a

libprocess.a : $(libobj)
	ar ruv $@ $^
	ranlib $@

process_test: process_test.o libprocess.a
	$(CXX) -o $@ process_test.o $(LDFLAGS)

load_table: load_table.o libprocess.a
	$(CXX) -o $@ load_table.o $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(libobj) process_test.o process_test load_table.o load_table