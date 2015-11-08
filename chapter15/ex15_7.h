#include "ex15_3.h"
#include <string>

class Limit_quote : public Quote
{
public:
	Limit_quote() = default;
	Limit_quote(const std::string &book, double p, std::size_t l, double disc) : Quote(book, p), limit(l), discount(disc) { }
	double net_price(std::size_t cnt) const { return (cnt >= limit) 
		? limit * (1 - discount) * price + (cnt - limit) * price 
		: cnt * (1 - discount) * price; }
private:
	std::size_t limit = 0;
	double discount = 0.0;

};

