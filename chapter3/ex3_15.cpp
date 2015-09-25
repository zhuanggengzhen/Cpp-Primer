#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s;
	vector<string> vec;
	while(cin >> s)
	{
		vec.push_back(s);
	}
	return 0;
}
