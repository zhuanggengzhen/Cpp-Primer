#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void fun(string &s, const string &oldVal, const string &newVal)
{
	for(int index = 0; index <= s.size() - oldVal.size(); )
	{
		if(s[index] == oldVal[0] && s.substr(index, oldVal.size()) == oldVal)
		{
			s.replace(index, oldVal.size(), newVal);
			index += newVal.size();
		}
		else
			index++;
	}
}

int main()
{
	string str{"tho and thru"};
	fun(str, "tho", "though");
	fun(str, "thru", "through");
	cout << str << endl;
	return 0;
}
