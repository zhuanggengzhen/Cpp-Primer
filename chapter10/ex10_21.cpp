#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

int main()
{
	int i = 10;
	auto f = [&i]() mutable ->bool { while(i) --i; if(i) return false; else return true; };
	cout << boolalpha << f() << endl;
	return 0;
}
