#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	char c;
	auto p = new char[10];
	auto q = p;
	while(cin >> c)
	{
		*q = c;
		q++;
	}	
	cout << p << endl;
	delete[] p;
	return 0;
}
