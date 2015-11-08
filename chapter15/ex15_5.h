#include "ex15_3.h"
#include <string>

class Bulk_quote : public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book, double sales_price, const std::size_t qty, double disc) : Quote(book, sales_price), min_qty(qty), discount(disc) { }
	double net_price(std::size_t cnt) const { return (cnt >= min_qty) ? cnt * (1 - discount) * price : cnt * price; }
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};
