#ifndef CLOSEST_H
#define CLOSEST_H
#include <vector>

class closest {
	int closestVal;
	public:
		int getClosestVal();
		/* closest::calcClosest()
		 * Input: vector of numbers
		 * Return: the value closest to zero
		 * It iterates through the list comparing the current min to 
		 * the next value in the vector, returns value closest to zero,
		 * positive value if it is a tie
		 */
		 int calcClosest(std::vector<int> NumList);
		 
		/* closest::calcMin()
		 * Input: 2 ints
		 * Returns : the min of the absolute value of the two numbers
		 * if the values are the same and 1 is negative and one is positive
		 * it returns the positive one
		 */
		 int calcMin(int a, int b);
};

#endif
