#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> vec;
	string s;
	for(int i = 0; cin >> s && i < 5; i++)
		vec.push_back(s);
	for(auto &str : vec)
	{
		for(auto &c : str)
			c = toupper(c);
		cout << str << endl;
	}
}
