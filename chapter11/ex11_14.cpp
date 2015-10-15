#include <utility>
#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::map;
using std::pair;

class Families
{
public:
	using Child = pair<string, string>;
	using Children = vector<Child>;
	using Family = map<string, Children>;
	void add(const string &last_name, const string &first_name, const string &birthday);
	void print();
private:
	Family family;
};

void Families::add(const string &last_name, const string &first_name, const string &birthday)
{
	family[last_name].push_back(make_pair(first_name, birthday));
}

void Families::print()
{
	if(family.empty())
		std::cout << "no data !" << std::endl;
	for(auto &f : family)
	{	
		std::cout << f.first << std::endl;
		for(auto &c : f.second)
			std::cout << c.first << " " << c.second << std::endl;
	}
}

int main()
{
	Families families;
	string last_name, first_name, birthday;
	while(std::cin >> last_name >> first_name >> birthday)
		families.add(last_name, first_name, birthday);
	families.print();
	return 0;
}
