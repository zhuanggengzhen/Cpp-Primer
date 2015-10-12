#include <list>
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::list;
using std::vector;

int main()
{
	list<const char *> lc{"hello", "world"};
	vector<string> vs;
	vs.assign(lc.begin(), lc.end());
	return 0;
}
