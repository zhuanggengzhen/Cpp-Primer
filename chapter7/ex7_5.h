#ifndef EX7_5_H
#define EX7_5_H

#include <string>

struct Person
{
	std::string name;
	std::string address;	
public:
	std::string const &get_name() const;
	std::string const &get_address() const;
};

std::string Person::get_name() const
{
	return name;
}

std::string Person::get_address() const
{
	return address;
}
#endif
