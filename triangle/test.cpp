#include "triangle.h"
#include <assert.h>
#include <iostream>

int inOneOrder (std::string msg, int a , int b, int c, std::string expected) {
	std::cout << msg << "(" << a <<", " << b << ", "  << c << ")" << std::endl;
	std::string result = testTriangle(a,b,c);
	assert (result == expected);
	return 0;

}
int inAllOrders (int a, int b, int c, std::string expected){
	inOneOrder ("in specified order", a, b, c, expected);
	inOneOrder ("rotated once", b, c, a, expected);
	inOneOrder ("rotated twice", c, a, b, expected);
	inOneOrder ("reversed", c, b, a, expected);
	inOneOrder ("reversed and rotated once", b, a, c, expected);
	inOneOrder ("reversed and rotated twice", a, c, b, expected);
	return 0;

}
int main(){
	inOneOrder ("Three equal segments", 5, 5, 5, "Equilateral");

	std::cout << "Two equal segments and one unequal one" << std::endl; 
	inAllOrders (5, 5, 4, "Isosceles");

	std::cout << "Two segments whose squares add to the square of the third" << std::endl; 
	inAllOrders (6, 8, 10, "Right");


	std::cout << "Three segments that don't fit any classification except that they make a triangle" << std::endl; 
	inAllOrders (10, 11, 12, "Other");


	std::cout << "One segment that's equal to the sum of the other two" << std::endl; 
	inAllOrders (7, 5, 12, "NotATriangle");


	std::cout << "Three segments that appear isosceles except that they're actually not a triangle" << std::endl; 
	inAllOrders (4, 4, 8, "NotATriangle");

}
