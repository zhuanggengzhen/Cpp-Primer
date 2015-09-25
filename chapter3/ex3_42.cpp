#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[10];
	for(int i = 0; i != vec.size(); i++)
	{
		a[i] = vec[i];
	}

	for(auto i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}
