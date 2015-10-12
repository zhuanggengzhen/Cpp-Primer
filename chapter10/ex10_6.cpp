#include <vector>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
	fill_n(vi.begin(), vi.size(), 0);
	for(auto i : vi)
		cout << i << " ";
	cout << endl;
	return 0;
}
