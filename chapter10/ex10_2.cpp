#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using std::string;
using std::list;
using std::cout;
using std::endl;

int main()
{
	list<string> ls{"ok", "test", "ok"};
	cout << count(ls.begin(), ls.end(), "test") << endl;
	return 0;
}
