#include "../Sales_item.h"
bool compareIsbn(const Sales_item &s1, const Sales_item &s2)
{
	return s1.isbn() < s2.isbn();
}
