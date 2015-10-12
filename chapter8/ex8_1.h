#ifndef EX_8_1_H
#define EX_8_1_H
#include <iostream>

std::istream &fun(std::istream &is)
{
	std::string temp;
	while(is >> temp )
	{
		std::cout << temp << std::endl;
	}
	
	is.clear();
	return is;
}
#endif
