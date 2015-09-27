#ifndef EX7_9_H
#define EX7_9_H

#include <string>
#include <iostream>

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

std::istream &read(std::istream &is, Person &p)
{
	is >> p.name >> p.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
	os << p.get_name() << " " << p.get_address();
	return os;
}


#endif
