#include <vector>
#include <list>

using std::list;
using std::vector;
using std::begin;
using std::end;

int main()
{
	list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<double> vd(li.begin(), li.end());
	vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<double> vd2(vi.begin(), vi.end());
	return 0;
}
