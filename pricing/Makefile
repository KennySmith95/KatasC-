GCC=g++
FLAGS=-std=c++11
all: test.out

test.out: pricing.cpp test.cpp pricing.h
	$(GCC) $(FLAGS)  test.cpp pricing.cpp -o test.out

clean:
	rm -rf *.out *~


