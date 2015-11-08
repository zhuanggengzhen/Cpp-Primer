#include "ex15_5.h"
#include <iostream>

int main()
{
	Quote q("11-22-33", 9.9);
	Bulk_quote bq("11-22-33", 9.9, 10, 0.5);

	print_total(std::cout, q, 20);
	print_total(std::cout, bq, 20);

	return 0;
}
