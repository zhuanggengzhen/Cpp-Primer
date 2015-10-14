#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	map<string, size_t> count;
	string str;
	while(cin >> str)
		++count[str];
	for(auto &p : count)
		cout << p.first << " : " << p.second << endl;
	return 0;
}
