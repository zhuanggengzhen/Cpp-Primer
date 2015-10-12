#ifndef EX_8_4_H
#define EX_8_4_H

#include <fstream>
#include <string>
#include <vector>
#include <iostream>

void fun(std::string fn, std::vector<std::string> vec)
{
	std::ifstream ifs(fn);
	if(ifs)
	{
		std::string temp;
		while(ifs >> temp)
		{
			vec.push_back(temp);
		}
	}
}

#endif
