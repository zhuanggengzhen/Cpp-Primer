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
	multimap<string, string> m{{"mark", "one"}, {"mark", "two"}, {"mark", "three"}};
	for(auto &p : m)
	{
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
	//erase "two"
	auto count = m.count("mark");
	auto iter = m.find("mark");
	while(count)
	{
		if(iter->second == "two")
			m.erase(iter);
		iter++;
		count--;
	}
	for(auto &p : m)
	{
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}
