#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using std::string;
using std::vector;
using std::getline;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;

void fun(string &fileName)
{
	ifstream ifs(fileName);
	vector<string> vec;
	string buf;
	istringstream iss;
	while(getline(ifs, buf))
	{
		vec.push_back(buf);
	}
	for(auto str : vec)
	{
		string temp;
		//1
		istringstream iss2(str);
		while(iss2 >> temp)
		{
			cout << temp << endl;
		}
		//2
		iss.str(str);
		while(iss >> temp)
		{
			cout << temp << endl;
		}
		iss.clear();
	}
}

int main(int argc, char **argv)
{
	string fileName(argv[1]);
	fun(fileName);
	return 0;
}
