#include <iostream> 
#include <assert.h>
#include "pricing.h"
void check(std::string msg, List merch, int expected){
	std::cout  <<  msg << std::endl;
	std::cout << "priced" << std::endl;
	int price = priceItems(merch);
	assert(expected == price);
	printf("costs $%1.2f\n",  (float)price/100);
	return;
}

int main(){
	std::string Food = "food", Other = "other", Alcohol = "alcohol";
	check ("$99.99 worth of food", {{3333, Food}, {3333, Food}, {3333,Food}}, 9999);
	check ("$100.00 worth of food", {{5000, Food}, {5000, Food}}, 9000);
	check ("$999.99 worth of food", {{5000, Food},  {5000, Food}, {89999, Food}}, 89999);
	check ("$1000.00 worth of food", {{100000, Food}}, 85000);
	check ("$10.00 worth of other", {{1000, Other}}, 1075);
	check ("$10.00 worth of alcohol", {{1000, Alcohol}}, 1155);
	check ("A real mishmash", {{1000, Food},  {1000, Alcohol},  {1000, Other},  {10000, Alcohol}}, 13301);
	return 0;
}
