#include <numeric>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<double> vd{2.5, 3.5, 4.5, 5.5};
	cout << accumulate(vd.begin(), vd.end(), 0) << endl;
	return 0;
}
