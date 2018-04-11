#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <assert.h>
#include "pricing.h"

/* priceItems()
 * Input: list of pairs of price and item type(string)
 * Return: total price of all the items in list
 */ 
int priceItems(std::vector<std::pair<int, std::string> >  merch){
	int food = 0, alcohol = 0, other = 0, total = 0;
	for(auto &elem : merch){
		if(elem.second == "food"){
			food += elem.first;
		}
		else if(elem.second == "alcohol"){
			alcohol += elem.first;
		}
		else if(elem.second == "other"){
			other += elem.first;
		}
	}
	total += food + alcohol + other;
	if(total >= 10000 && total < 100000){
		food *= 0.9;
		alcohol *= 0.9;
		other *= 0.9;
	}
	else if (total >= 100000){
		food *= 0.85;
		alcohol *= 0.85;
		other *= 0.85;
	}

	return calcTaxes(food,alcohol, other);
}
/* calcTaxes()
 * Input: amount of food, alcohol and other
 * Returns: total of all food, alcohol,and other including taxes
 */
int calcTaxes(int food,int alcohol, int other){
	int sum = 0.0;
	sum += food;
	sum += alcohol * 1.155;
	sum += other * 1.075;
	return sum;
}

