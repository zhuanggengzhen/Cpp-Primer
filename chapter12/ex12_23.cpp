#include <iostream>
#include <string.h>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto p = new char[16];
	strcat(p, "hello ");
	strcat(p, "world!");
	cout << p << endl;
	delete[] p;

	string str1{"hello "};
	string str2{"world!"};
	cout << str1 + str2 << endl;
	return 0;
}
