gcc_options = -std=c++17 -Wall --pedantic-error
header_file = ../../../util/all.h

program : main.cpp $(header_file) all.h.gch
	g++ $(gcc_options) -include all.h -o $@ $<

all.h.gch : $(header_file) 
	g++ $(gcc_options) -x c++-header -o $@ $<

run : program
	./program

clean :
	rm -f ./program
	rm -f ./all.h.gch

.PHONY : run clean
