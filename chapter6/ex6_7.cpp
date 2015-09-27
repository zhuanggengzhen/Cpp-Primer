#include <iostream>

int fun()
{
	static int count;
	count++;
	return (count == 1) ? 0 : 1;
}

int main()
{
	std::cout << fun() << std::endl;
	std::cout << fun() << std::endl;
	std::cout << fun() << std::endl;
	std::cout << fun() << std::endl;
	return 0;
}
