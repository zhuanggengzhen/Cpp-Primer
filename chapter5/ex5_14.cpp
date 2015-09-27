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
	vector<string> vec;
	string str;
	while(cin >> str)
		vec.push_back(str);
	return 0;
}
