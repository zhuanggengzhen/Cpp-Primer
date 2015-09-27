#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string str;
	string prestr;
	while(cin >> str)
	{	
		if(str == prestr && isupper(str[0]))
		{
			cout << "the repeated word is : " << str << endl;
			break;
		}
		prestr = str;
		str = " ";
	}
	if(str != prestr)
		cout << "these is not repeated word." << endl;
	return 0;
}
