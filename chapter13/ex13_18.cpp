#include "ex13_18.h"

int Employee::increment = 0;

Employee::Employee()
{
	id = increment++;
}

Employee::Employee(const std::string &n)
{
	name = n;
	id = increment++;
}

int main()
{
	return 0;
}
