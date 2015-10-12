#include <list>
#include <deque>
#include <iostream>

using std::cout;
using std::list;
using std::deque;

int main()
{
	list<int> ls{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	deque<int> di1, di2;
	for(auto i : ls)
	{
		if(i%2 == 1)
			di1.push_back(i);
		else
			di2.push_back(i);
	}
	for(auto i : di1)
		cout << i << " ";
	cout << std::endl;
	for(auto i : di2)
		cout << i << " ";
	cout << std::endl;
	return 0;
}
