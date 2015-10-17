#include <map>
#include <iostream>
#include <string>

using std::string;
using std::multimap;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	multimap<string, int> m{{"one", 1}, {"two", 2}, {"three", 3}};
	for(auto &p : m)
	{
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
	m.erase(m.find("two"));
	for(auto &p : m)
	{
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}
