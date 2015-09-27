#ifndef EX7_2_H
#define EX7_2_H

#include <string>

struct Sales_data 
{
	std::string isbn() const 
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &);
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &sd)
{
	units_sold += sd.units_sold;
	revenue += sd.revenue;
	return *this;
}

#endif
