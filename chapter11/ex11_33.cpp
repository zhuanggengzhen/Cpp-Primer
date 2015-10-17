#include <map>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <stdexcept>

using std::runtime_error;
using std::cout;
using std::endl;
using std::istringstream;
using std::string;
using std::map;
using std::ifstream;

map<string, string> buildMap(ifstream &ifs)
{
	map<string, string> rule_map;
	string key, value;
	while(ifs >> key && getline(ifs, value))
	{
		if(value.size() > 1)
			rule_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}
	return rule_map;
}

const string& transform(map<string, string> &rule, string &key)
{
	auto iter = rule.find(key);
	if(iter == rule.cend())
		return key;
	else
		return iter->second;
}

void word_transform(ifstream &rule, ifstream &input)
{
	auto rule_map = buildMap(rule);
	string line, word;
	while(getline(input, line))
	{
		istringstream iss(line);
		while(iss >> word)
		{
			word = transform(rule_map, word);
			cout << word << " ";
		}
		cout << endl;
	}
}

int main()
{
	ifstream rule("./ex11_33_1.txt");
	ifstream input("./ex11_33_2.txt");
	word_transform(rule, input);
	return 0;
}
