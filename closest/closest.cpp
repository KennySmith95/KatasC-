#include <cmath>
#include <iostream>
#include <random>
#include <assert.h>
#include "closest.h"
/* closest::calcClosest()
 * Input: vector of numbers
 * Return: the value closest to zero
 * It iterates through the list comparing the current min to 
 * the next value in the vector, returns value closest to zero,
 * positive value if it is a tie
 */

int closest::getClosestVal(){
	return this->closestVal;
}
int closest::calcClosest(std::vector<int> list){
	if(list.size() == 0)
		return 2147483647;
	if(list.size() == 1)
		return list[0];
	int x, currentMin = calcMin(list[0], list[1]);
	for (x = 2; x < list.size(); x++){
		currentMin = calcMin(currentMin, list[x]);
	}
	this->closestVal = currentMin;
	return currentMin;
}
/* closest::calcMin()
 * Input: 2 ints
 * Returns : the min of the absolute value of the two numbers
 * if the values are the same and 1 is negative and one is positive
 * it returns the positive one
 */
int closest::calcMin(int a, int b){
	int pos1 = std::abs(a), pos2 = std::abs(b);
	if(pos1 < pos2){
		return a;
	}
	else if (pos2 < pos1){
		return b;
	}
	return std::fmax(a,b);
}

