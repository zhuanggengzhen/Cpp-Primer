#include <numeric>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vi{1, 2, 3, 4, 5};
	cout << accumulate(vi.begin(), vi.end(), 0) << endl;
	return 0;
}
