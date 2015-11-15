#include <string>
#include "ex15_15_DISC_QUOTE.h"

class Limit_quote : public Disc_quote
{
public:
	Limit_quote() = default;
	Limit_quote(const std::string &book, double p, std::size_t qty, double disc) : Disc_quote(book, p, qty, disc) { }
	double net_price(std::size_t cnt) const { return (cnt >= quantity) 
		? quantity * (1 - discount) * price + (cnt - quantity) * price 
		: cnt * (1 - discount) * price; }
};

