#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(auto it = vec.end(); it != vec.begin(); )
		cout << *(--it) << " ";
	cout << endl;
	return 0;
}
