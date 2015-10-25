#include <iostream>
#include <vector>
#include <initializer_list>

struct X
{
	X(){std::cout << "X" << std::endl;}
	X(const X&){ std::cout << "X(const X&)" << std::endl;}
	X &operator=(const X&)
	{
		std::cout << "operator=" << std::endl;
		return *this;
	}
	~X(){std::cout << "~X" << std::endl;}
};

void f(const X &rx, X x)
{
	std::vector<X> vec;
//	vec.reserve(2);
	std::cout << vec.capacity() << std::endl;
	vec.push_back(rx);
	std::cout << "1" << std::endl;
	vec.push_back(x);
	std::cout << vec.capacity() << std::endl;
}	


int main()
{
	X *p = new X;
	f(*p, *p);
	delete p;
	return 0;
}
