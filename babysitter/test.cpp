#include "babysitter.h"
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <sstream>

std::string time (int integralTime){
	std::stringstream ss;
	if(integralTime < 5 || integralTime == 12)
		ss << integralTime <<  "am";
	else 
		ss << integralTime <<  "pm";
	return ss.str();
}

void check (int arrival, int departure, int bedtime, int expectedPay){
	std::cout << "A babysitter who arrives at "<< time(arrival) << " and departs at " << time(departure) << ", with bedtime at "<< time(bedtime) << std::endl;
	Babysitter sitter;
	int result = sitter.calculatePay (arrival, departure, bedtime);

	std::cout << "should be paid: " << expectedPay << std::endl;
	assert (result == expectedPay);
}

int main(){
	check (6, 8, 9, 20);
	check (5, 9, 9, 40);
	check (9, 12, 9, 18);
	check (5, 12, 9, 58);
	check (12, 4, 9, 32);
	check (5, 4, 9, 90);
}

