#include "ex15_3.h"
#include <string>

class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const std::string &book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) { }
	Disc_quote(const Disc_quote &dq) : Quote(dq), quantity(dq.quantity), discount(dq.discount) { std::cout << "DISC copy constructor\n"; }
	Disc_quote(const Disc_quote &&dq) noexcept : Quote(std::move(dq)), quantity(std::move(dq.quantity)), discount(std::move(dq.discount)) { std::cout << "DISC move constructor\n"; }
	Disc_quote &operator=(Disc_quote &rhs)
	{
		std::cout << "DISC copy=()\n";
		Quote::operator=(rhs);
		quantity = rhs.quantity;
		discount = rhs.discount;
		return *this;
	}
	Disc_quote &operator=(Disc_quote &&rhs)
	{
		std::cout << "DISC move()\n";
		if(*this != rhs)
		{
			quantity = rhs.quantity;
			discount = rhs.discount;
		}
		return *this;
	}
	double net_price(std::size_t) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};
