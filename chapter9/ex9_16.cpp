#include <vector>
#include <iostream>
#include <list>

using std::list;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	list<int> li{0, 1, 2, 3, 4};
	vector<int> vec{0, 1, 2, 3, 4};
	vector<int> temp(li.begin(), li.end());
	if(temp == vec)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}
