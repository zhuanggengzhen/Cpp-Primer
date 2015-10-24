#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::ifstream;
using std::istringstream;
using std::vector;

int main()
{
	string line, word;
	vector<string> file;
	map<string, set<int>> wm;
	ifstream input("./test.txt");
	int line_no = 0;
	while(getline(input, line))
	{
		file.push_back(line);
		istringstream iss(line);
		while(iss >> word)
		{
			wm[word].insert(line_no);
		}
		++line_no;
	}
	while(true)
	{
		cout << "enter word to look for, or q to quit : ";
		cin >> word;
		if(word == "q")
			break;
		else
		{
			auto iter = wm.find(word);
			if(iter == wm.end())
			{
				cout << "no data\n";
				continue;
			}
			else
			{
				cout << word << " occurs " << iter->second.size() << " times\n";
				for(auto i : iter->second)
				{
					cout << "    (line " << i << ") " << file[i] << endl;
				}
			}
		}	
	}
	return 0;
}
