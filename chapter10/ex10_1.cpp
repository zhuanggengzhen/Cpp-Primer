#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> vi{0, 1, 2, 3, 4, 5, 2, 3, 4, 5};
	cout << count(vi.begin(), vi.end(), 5) << endl;
	return 0;
}
