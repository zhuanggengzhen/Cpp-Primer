#include <iostream>

int fact(int i)
{
	int ret = 1;
	while(i > 1)
		ret *= i--;
	return ret;
}

int main()
{
	int i;
	std::cout << "Please enter a number : ";
	std::cin >> i;
	std::cout << "the factorial is " << fact(i) << std::endl;	
	return 0;
}
