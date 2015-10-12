#include <algorithm>
#include <list>
#include <iostream>

using std::cout;
using std::endl;
using std::list;

int main()
{
	list<int> li{0, 1, 2, 3, 4, 0, 3, 2, 1};
	auto it = find(li.rbegin(), li.rend(), 0);
	cout << std::distance(it, li.rend()) << endl;
	return 0;
}
