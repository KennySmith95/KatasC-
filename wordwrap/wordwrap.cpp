#include <iostream>
#include <vector>
#include <assert.h>
#include "wordwrap.h"
/* wordwrapper::wrap()
 * Input: string and size of line
 * Returns: wrapped string with max line length equal to size of line
 * This is the initalizer for the recursive function wrapper
 */
std::string wordwrapper::wrap(std::string input, size_t size){
	this->size = size;
	return this->wrapper(input, this->size);
}
/* wordwrapper::wrapper()
 * Input: string of remaining text to be wrapped, size remaining on currentline
 * Return: lines with new lines inserted where necessary, base case returns when the remaining text
 * fits on current line
 */
std::string wordwrapper::wrapper(std::string input, size_t size){
	int index = input.find(" ",1);
	if(input.length() <= size){
		return input;
	}
	if(index >= this->size){
		return input.substr(0,this->size) + '\n' + wrapper(input.substr(this->size),this->size);
	}
	if(index < size){
		return input.substr(0,index) + wrapper(input.substr(index), size-(index - 1));
	}
	return '\n' + wrapper(input.substr(1),this->size);

}
