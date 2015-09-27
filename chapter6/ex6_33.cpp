#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void print(vector<int>::iterator bg, vector<int>::iterator ed)
{
	if(bg != ed)
	{
		cout << *bg << " ";
		print(++bg, ed);
	}
}

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	print(vec.begin(), vec.end());
	cout << endl;
	return 0;
}
