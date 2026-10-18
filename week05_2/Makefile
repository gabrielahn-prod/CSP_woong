# example01
example01: example01.o add.o
	g++ example01.o add.o -o example01 

example01_dbg: example01.o add_dbg.o
	g++ example01.o add_dbg.o -o example01_dbg

example01.o: example01.cpp add.h
	g++ -c example01.cpp

add.o: add.cpp add.h
	g++ -c add.cpp

add_dbg.o: add_dbg.cpp add.h
	g++ -c add_dbg.cpp

# example02
example02: example02.o point_print.o point_sum.o
	g++ example02.o point_print.o point_sum.o -o example02

# example04
example04: example04.o
	g++ example04.o -o example04

# example05
example05: example05.o
	g++ example05.o -o example05

clean:
	rm -f example01 example01_dbg example02 example04 example05 *.o 