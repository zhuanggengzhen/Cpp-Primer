#include <map>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <numeric>
using namespace std;
using namespace std::placeholders;

int main()
{
	map<string, size_t> count;
	string str;
	while(cin >> str)
	{
		auto it = str.begin();
		for( ; it != str.end(); ++it)
		{
			*it = tolower(*it);
			if(ispunct(*it))
				break;
		}
		++count[string(str.begin(), it)];
	}
	for(auto &p : count)
		cout << p.first << " : " << p.second << endl;
	return 0;
}
