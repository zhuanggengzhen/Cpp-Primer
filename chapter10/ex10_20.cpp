#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;

int main()
{
	string str;
	vector<string> vec;
	while(cin >> str)
		vec.push_back(str);
	int count = count_if(vec.begin(), vec.end(),
			[](const string &s)
			{ return s.size() > 6; });
	cout << count << endl;
	return 0;
}
