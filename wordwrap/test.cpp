#include <assert.h>
#include <iostream>
#include "wordwrap.h"

int main(){
	std::string test1 = "See Spot run. Run, Spot, run!";
	std::string test2 = "abcdefghijklmnopqrstuvwxyz";
	
	wordwrapper wd;
	std::cout << "Given a string from a children's book and a short line length" << std::endl;	
	std::string result = wd.wrap(test1,10);
	assert (result == "See Spot\nrun. Run,\nSpot, run!");
	std::cout << "breaks the line in 3" << std::endl;
	
	std::cout << "Given a word longer than two lines" << std::endl;	
	std::string result2 = wd.wrap(test2,10);
	assert(result2 == "abcdefghij\nklmnopqrst\nuvwxyz");
	std::cout << "breaks the word twice" << std::endl;
	return 0;
}
