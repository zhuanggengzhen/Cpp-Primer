#include <map>
#include <iostream>
#include <string>
#include <set>

using std::string;
using std::multimap;
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::multiset;

//ex11_32
void print(multimap<string, string> &m)
{
	map<string, multiset<string>> m2;
	for(auto &p : m)
	{
		m2[p.first].insert(p.second);
	}
	for(auto &p : m2)
	{
		cout << p.first << ": ";
		for(auto &w : p.second)
			cout << w << " ";
		cout << endl;
	}
}


int main()
{	
	
	multimap<string, string> m{{"mark", "two"}, {"mark", "three"}, {"mark", "one"}, {"kobe", "four"}, {"kobe", "five"}};
	//ex11_32
	print(m);
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
	print(m);
	return 0;
}
