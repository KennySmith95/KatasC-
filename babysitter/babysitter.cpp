#include "babysitter.h"
#include <queue>
#include <iostream>

/* Babysitter() default constructor
 * sets the rates
 */
Babysitter::Babysitter(){
	this->awake = 10;
	this->asleep = 6;
	this->afterMid = 8;
	this->runningTotal = 0;
}

/* Babysitter::calculatePay()
 * calculates the pay
 * input: arrival time, depart time, bedtime
 * returns total pay
 */
int Babysitter::calculatePay(int arriv, int depart, int bedtime){
	int midNight = 12;
	arriv = convertInTimes(arriv);
	depart = convertInTimes(depart);
	bedtime = convertInTimes(bedtime);
	int currentTime = arriv;
	if(arriv <= bedtime){
		if(depart <= bedtime)
			return (depart - arriv) * this->awake;
		else
			runningTotal += (bedtime - arriv) * this->awake;
		currentTime = bedtime;
	}
	if (depart <= midNight)
		return this->runningTotal + ((depart - currentTime) * this->asleep);
	this->runningTotal += (midNight - currentTime) * this->asleep;
	currentTime = midNight;
	this->runningTotal += (depart - currentTime) * this->afterMid;
	return this->runningTotal;
}

/* Babysitter::convertInTimes()
 * Input: time
 * Output: time
 * converts the input time to an inverted 24 hour clock (0 = noon, 12 = midnight) for easier arithmetic 
 */
int Babysitter::convertInTimes(int time){
	if(time >= 5 && time <= 12)
		return time;
	else 
		return time + 12;
}

