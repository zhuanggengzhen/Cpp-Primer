#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto it = vec.begin();

	for(int i = 0, tmp = 0; cin >> tmp && i <= 10; i++)
	{
		cout << *it+(tmp/10) << " ";
	}
	cout << endl;
	return 0;
}
