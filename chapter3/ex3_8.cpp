#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str("a simple string");
	int i = 0;
	while(i < str.size())
	{
		str[i++] = 'X';
	}
	cout << str << endl;

	for(int i = 0; i < str.size(); i ++)
		str[i] = 'Y';
	cout << str << endl;
   	return 0;
}
