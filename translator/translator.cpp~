#include <iostream>
#include <assert.h>
#include <vector>
/* translate()
 * Input: camel cased string
 * Returns: snake cased string
 */
std::string translate(std::string input){
	int x, prevUpper = 0, prevNum = 0, prevLower = 0;
	if(input.length() == 0)
		return input;
	std::string output = "";
	output += tolower(input[0]);
	prevLower = 1;
	for(x = 1; x < input.length(); x++){
		if(isupper(input[x])){
			if (prevUpper == 0 || (prevUpper == 1 && islower(input[x+1]))){
				output += "_";
			}
			output += tolower(input[x]);
			prevUpper = 1;
			continue;
		}
		prevUpper = 0;
		if(isdigit(input[x])){
			if (prevNum == 0){
				output += "_";
			}
			output += input[x];
			prevNum = 1;
			continue;
		}
		prevNum = 0;
		if(islower(input[x])){
			if (prevLower == 0){
				output += "_";
			}
			output += input[x];
			prevLower = 1;
			continue;
		}
		prevLower = 0;
	}
	return output;
}
