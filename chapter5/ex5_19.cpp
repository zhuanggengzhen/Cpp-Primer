#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string str1, str2;
	do
	{
		cout << "please enter two string : ";
		cin >> str1 >> str2;
		cout << "the shorter string is : " << ((str1.size() > str2.size()) ? str2 : str1) << endl;
	}while(true);
	return 0;
}
