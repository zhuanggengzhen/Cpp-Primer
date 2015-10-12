#include <string>
#include <list>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
	list<string> ls;
	string str;
	while(cin >> str)
		ls.push_back(str);
	for(auto it = ls.begin(); it != ls.end(); ++it)
		cout << *it << endl;
	return 0;
}
