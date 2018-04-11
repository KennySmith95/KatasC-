GCC=g++
FLAGS=-std=c++11
all: test.out

test.out: wordwrap.cpp wordwrap.h test.cpp
	$(GCC) $(FLAGS) test.cpp wordwrap.cpp -o test.out


clean:
	rm -rf *.out *~


