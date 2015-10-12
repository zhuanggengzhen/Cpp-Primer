#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void fun(string &s, const string &oldVal, const string &newVal)
{
	for(auto it = s.begin(); it != s.end(); )
	{
		cout << *it << endl;
		if(*it == oldVal[0])
		{
			string tmp;
			tmp.assign(it, it + oldVal.size());
			if(tmp == oldVal)
			{	
				it = s.erase(it, it + oldVal.size());
				s.insert(it, newVal.begin(), newVal.end());
			}
			else
				it++;
		}
		else
			it++;
	}
}

int main()
{
	string str{"tho and thru"};
	fun(str, "tho", "though");
//	fun(str, "thru", "through");
	cout << str << endl;
	return 0;
}
