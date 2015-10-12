#include <string>
#include <deque>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
	deque<string> ds;
	string str;
	while(cin >> str)
		ds.push_back(str);
	for(auto it = ds.begin(); it != ds.end(); ++it)
		cout << *it << endl;
	return 0;
}
