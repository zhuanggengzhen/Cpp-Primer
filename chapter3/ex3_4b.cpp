#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1, str2;
	while(cin >> str1 >> str2)
	{
		if(str1.size() == str2.size())
			cout << "the two strings have the same length" << endl;
		else
			cout << "the longer string is :" << (str1.size() > str2.size() ? str1 : str2) << endl;

	}
	return 0;
}
