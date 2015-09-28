#ifndef EX7_41_H
#define EX7_41_H

#include <iostream>
#include <string>

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data 
{
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	
public:
	Sales_data():Sales_data(" ", 0, 0.0){ std::cout << "no parameter\n"; }
	Sales_data(const std::string &s):Sales_data(s, 0, 0.0){ std::cout << "1 parameter string\n"; }
	Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){ std::cout << "3 parameters\n"; }
	Sales_data(std::istream &is):Sales_data()
	{
		std::cout << "1 parameter istream\n";
		read(is, *this);
	}

	std::string isbn() const 
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &);
	
private:
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}
	
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif
