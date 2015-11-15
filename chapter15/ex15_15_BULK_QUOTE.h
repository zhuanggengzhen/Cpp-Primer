#include "ex15_15_DISC_QUOTE.h"
#include <string>

class Bulk_quote : public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) : Disc_quote(book, price, qty, disc) { }
	Bulk_quote(const Bulk_quote &bq) : Disc_quote(bq) { std::cout << "BULK copy constructor\n"; }
	Buld_quote(Bulk_quote &&bq) noexcept : Disc_quote(std::move(bq)) { std::cout << "BULK move construct\n"; }
	Bulk &operator=(const Bulk_quote &rhs)
	{
		std::cout << "Bulk copy=()\n";
		Disc_quote::operator=(rhs)
		return *this;	
	}
	Bulk &operator=(Bulk_quote &&rhs) noexcept
	{
		std::cout << "Bulk move=()\n";
		Disc_quote::operator=(std::move(rhs));
		return *this;
	}
	double net_price(std::size_t) const override;
};
