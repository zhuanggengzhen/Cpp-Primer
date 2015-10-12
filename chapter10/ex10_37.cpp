#include <list>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> li;
	copy(vec.rbegin()+3, vec.rend()-2, back_inserter(li));
	for(auto &i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}
