#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::cout;
using std::ifstream;
using std::getline;
using std::istringstream;
using std::ostringstream;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

bool vail(string str)
{
	for(auto c : str)
	{
		if(!(c >= '0' && c <= '9' || c == '-'))
			return false;
	}
	return true;
}

void readFromFile(string &fileName, vector<PersonInfo> &people)
{
	ifstream ifs(fileName);
	string line, word;
	while(getline(ifs, line))
	{
		PersonInfo info;
		istringstream iss(line);
		iss >> info.name;
		while(iss >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

}

void print(vector<PersonInfo> &people)
{
	for(const auto &info : people)
	{
		ostringstream formatted, badNums;
		for(const auto &nums : info.phones)
		{
			if(!vail(nums))
			{
				badNums << " " << nums;
			}
			else
				formatted << " " << nums;
		}
		if(badNums.str().empty())
			cout << info.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << info.name
				<< " invalid number(s) " << badNums.str() << endl;
	}
}

int main(int argc, char **argv)
{
	vector<PersonInfo> people;
	string fileName(argv[1]);
	readFromFile(fileName, people);
	print(people);
	return 0;
}

















