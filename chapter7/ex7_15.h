#ifndef EX7_15_H
#define EX7_15_H

#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream &is, Person &p);

struct Person
{
	std::string name;
	std::string address;	
public:
	Person() = default;
	Person(const std::sting &n, const std::string &a):name(n), address(a){ }
	Person(std::istream *is)
	{
		read(is, *this);
	}
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
