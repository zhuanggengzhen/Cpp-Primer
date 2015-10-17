#include <map>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
	string word;
	map<string, int> count;
	while(cin >> word)
	{
		auto ret = count.insert({word, 1});
		if(!ret.second)
			++ret.first->second;
	}
	for(auto i : count)
	{
		cout << i.first << ": " << i.second << endl;
	}
	return 0;
}
