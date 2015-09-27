#include <iostream>

int summary(int i)
{
	static int sum;
	sum += i;
	return sum;
}

int main()
{
	std::cout << summary(5) + summary(10) << std::endl;
	return 0;
}
