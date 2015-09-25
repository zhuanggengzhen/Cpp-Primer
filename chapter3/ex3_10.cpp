#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main()
{
	string str1;
	while(getline(cin, str1))
	{
		for(auto c : str1)
		{
			if(!ispunct(c))
				cout << c;
		}
	}
	return 0;
}
