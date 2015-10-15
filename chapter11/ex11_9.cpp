#include <map>
#include <string>
#include <list>
#include <fstream>
#include <iostream>
#include <cctype>
#include <algorithm>

using std::ifstream;
using std::map;
using std::string;
using std::list;

int main(int argc, char **argv)
{
	ifstream ifs(argv[1]);
	string line;
	int line_number = 0;
	map<string, list<int>> m;
	while(getline(ifs, line))
	{	
		++line_number;
		for(auto bg = line.begin(), end = bg;  bg <= line.end(); bg = end+1)
		{
			end = find_if(bg, line.end(), isspace);
			if(end <= line.end())
			{
				string word(bg, end);
				if(word != "")
					m[word].push_back(line_number);
			}
		}
	}
	for(auto p : m)
	{
		std::cout << p.first << " : ";
		for(auto l : p.second)
		{
			std::cout << l << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
