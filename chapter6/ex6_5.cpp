#include <iostream>

int abs(int i)
{
	return (i >= 0) ? i : -i;
}

int main()
{
	int i;
	std::cout << "Please enter a number : ";
	std::cin >> i;
	std::cout << "the absolute value is " << abs(i) << std::endl;	
	return 0;
}
