#include <utility>
#include <vector>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;
using std::string;

int main()
{
	vector<pair<string, int>> vp;
	string str;
	int i;
	while(cin >> str >> i)
	{
		auto p = make_pair(str, i);
		vp.push_back(p);
	}
	for(auto &p : vp)
	{
		cout << p.first << "-->" << p.second << endl;
	}
	return 0;
}
