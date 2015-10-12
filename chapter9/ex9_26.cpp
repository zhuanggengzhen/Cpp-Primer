#include <vector>
#include <list>
#include <iostream>

using std::end;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vi(ia, end(ia));
	list<int> li(ia, end(ia));
	for(auto i = li.begin(); i != li.end(); )
	{
		if(*i%2)
			i = li.erase(i);
		else
			++i;
	}
	for(auto i = vi.begin(); i != vi.end(); )
	{
		if(!(*i%2))
			i = vi.erase(i);
		else
			++i;
	}
	for(auto i : li)
		cout << i << " ";
	cout << endl;
	for(auto i : vi)
		cout << i << " ";
	cout << endl;
	return 0;
}
