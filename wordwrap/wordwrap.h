#ifndef WORDWRAP_H
#define WORDWRAP_H
#include <iostream>
#include <vector>

class wordwrapper{
	public:
		/* wordwrapper::wrap()
		 * Input: string and size of line
		 * Returns: wrapped string with max line length equal to size of line
		 * This is the initalizer for the recursive function wrapper
		 */
		std::string wrap(std::string input, size_t size);
	private:
		
		/* wordwrapper::wrapper()
		 * Input: string of remaining text to be wrapped, size remaining on currentline
		 * Return: lines with new lines inserted where necessary, base case returns when the remaining text
		 * fits on current line
		 */
		std::string wrapper(std::string input, size_t size);
		size_t size;
};
#endif
