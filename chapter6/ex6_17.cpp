#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;
using std::cin;

bool contain_upper(const string &str)
{
	for(auto &ch : str)
		if(isupper(ch))
			return true;
	return false;
}

void to_lower(string &str)
{
	for(auto &ch : str)
		ch = tolower(ch);
}

int main()
{
	string str;
	cin >> str;
	cout << (contain_upper(str) ? "yes" : "no") << endl;
	to_lower(str);
	cout << (contain_upper(str) ? "yes" : "no") << endl;
	return 0;
}
