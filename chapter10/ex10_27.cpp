#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> vi{0, 0, 1, 2, 3, 3, 4, 5};
	list<int> li;
	unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
	for(auto &i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}
