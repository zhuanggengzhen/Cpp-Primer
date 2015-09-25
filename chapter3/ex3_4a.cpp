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
		if(str1 == str2)
			cout << "the two strings are equal" << endl;
		else
			cout << "the larger string is :" << (str1 > str2 ? str1 : str2) << endl;

	}
	return 0;
}
