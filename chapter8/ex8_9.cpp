#include <iostream>
#include <sstream>
#include <string>

using std::string;
using std::istringstream;

std::istream &fun(std::istream &is)
{
	std::string temp;
	while(is >> temp)
	{
		std::cout << temp << std::endl;
	}
	
	is.clear();
	return is;
}

int main()
{
	string str("test string");
	istringstream iss(str);
	fun(iss);
	return 0;
}
