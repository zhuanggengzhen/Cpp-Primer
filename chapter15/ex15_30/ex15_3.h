#include <string>
#include <iostream>

class Quote
{
	friend bool operator!=(const Quote &lhs, const Quote &rhs);
public:
	Quote() = default;
	Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) { }
	Quote(const Quote &quote) : bookNo(quote.bookNo), price(quote.price) { std::cout << "copy constructor\n"; }
	Quote(Quote &&quote) noexcept : bookNo(std::move(quote.bookNo)), price(std::move(quote.price)) { std::cout << "move constructor\n"; }
	Quote &operator=(const Quote &rhs)
	{
		std::cout << "copy=()\n";
		bookNo = rhs.bookNo;
		price = rhs.price;
		return *this;
	}
	Quote &operator=(Quote &&rhs) noexcept
	{ 
		std::cout << "move=()\n";
		if(*this != rhs)
		{
			bookNo = rhs.bookNo;
			price = rhs.price;
		}
		return *this;
	}

	std::string isbn() const { return bookNo; }
	virtual Quote* clone() const & { return new Quote(*this); }
	virtual Quote* clone() && { return new Quote(std::move(*this)); }
	virtual double net_price(std::size_t n) const { return n * price; }
	virtual ~Quote() = default;

private:
	std::string bookNo;

protected:
	double price = 0.0;
};

bool operator!=(const Quote &lhs, const Quote &rhs)
{
	return lhs.bookNo != rhs.bookNo && lhs.price != rhs.price;
}


double print_total(std::ostream &os, const Quote &item, std::size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}
