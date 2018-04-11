#include <iostream>
#include <cmath>
#include <vector>
#include <assert.h>
#include <algorithm>
#include "triangle.h"
/* testTriangle()
 * Input: edge lengths of a triangle
 * Return: the classification of the triangle as a string
 */
std::string testTriangle(int a, int b, int c){
	std::vector<int> triangle = {a, b, c};
	std::sort(triangle.begin(), triangle.end());
	if(triangle[0] + triangle[1] <= triangle[2]){
		return "NotATriangle";
	}
	else if ( a == b && b == c){
		return "Equilateral";
	}
	else if((pow(triangle[0], 2) + pow(triangle[1],2)) == pow(triangle[2],2)){
		return "Right";
	}
	else if (a == b || b == c || a == c){
		return "Isosceles";
	}
	return "Other";
}
