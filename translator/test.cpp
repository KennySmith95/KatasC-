#include <iostream>
#include <assert.h>
#include "translator.h"
void check (std::string description, std::string input, std::string output){
	std::cout << "directed to translate " << description << std::endl;
	std::string result = translate (input);
	std::cout << output << std::endl;
	std::cout << result << std::endl;
	assert (result == output);
	std::cout << "does so" << std::endl; 

}
int main(){
	check ("an empty string", "", "");
	check ("a simple capitalized string", "Simple", "simple");
	check ("a camelcased string with an abbreviation", "ICalledTheAAAWhenMyCarBrokeDown", "i_called_the_aaa_when_my_car_broke_down");
	check ("a camelcased string that ends with a one-letter word", "TheLetterA", "the_letter_a");
	check ("one character", "A", "a");
	check ("a camel-cased string beginning with a lowercase letter", "camelCase", "camel_case");
	check ("a string with non-letters", "Porsche911", "porsche_911");
}

