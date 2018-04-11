#include <vector>
#include <assert.h>
#include <iostream>
#include "closest.h"
void check (std::string inMsg, std::vector<int> input, std::string outMsg, int expected){
	std::cout << inMsg << std::endl;
	std::cout << "searched for the element closest to zero" << std::endl;
	closest Closest;
	int result = Closest.calcClosest (input);

	std::cout << outMsg << std::endl;
	assert (result == expected);
	return;
}
int main(){
	check ("A list containing just one value", {-10}, "produces that one value", -10);
	check ("A list containing several positive values", {5, 2, 8, 4, 7, 1}, "produces the smallest positive value", 1);
	check ("An empty list", {}, "produces no result", 2147483647);
	check ("A list containing several negative values", {-5, -2, -8, -4, -7, -1}, "produces the greatest negative value", -1);
	check ("A list with a closer negative value", {5, 2, 8, 4, 7, -1}, "produces that negative value", -1);
	check ("A list with a closer positive value", {-5, -2, -8, -4, -7, 1}, "produces that positive value", 1);
	check ("A list containing a tie with the negative first", {5, -2, 8, 4, 7, 2}, "is resolved in favor of the positive", 2);
	check ("A list containing a tie with the positive first", {5, 2, 8, 4, 7, -2}, "is resolved in favor of the positive", 2);
}
