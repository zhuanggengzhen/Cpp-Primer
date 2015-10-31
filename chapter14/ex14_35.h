#include <iostream>
#include <string>


class PrintString
{
public:
	PrintString(std::istream &is = std::cin) : i(is){};
	std::string operator()() const  
	{ 
		std::string s;
		getline(i, s); 
		return i ? s : std::string();
	}
private:
	std::istream &i;
};
