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
	std::cin >> i;
	std::cout << fact(i) << std::endl;	
	return 0;
}
