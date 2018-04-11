#ifndef PRICING_H
#define PRICING_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <assert.h>
typedef std::vector<std::pair<int, std::string> > List;

/* priceItems()
 * Input: list of pairs of price and item type(string)
 * Return: total price of all the items in list
 */ 
int priceItems(std::vector<std::pair<int, std::string> >  merch);


/* calcTaxes()
 * Input: amount of food, alcohol and other
 * Returns: total of all food, alcohol,and other including taxes
 */
int calcTaxes(int food,int alcohol, int other);

#endif
