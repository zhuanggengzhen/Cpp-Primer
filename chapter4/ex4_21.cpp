#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(auto &i : vec)
	{
		i = i&0x1 ? i*2 : i;
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
