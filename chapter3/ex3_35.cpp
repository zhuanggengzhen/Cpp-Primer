#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = a;
	for(int i = 0; i < 10; i++)
		*(p++) = 0;
	for(auto i : a)
		cout << i << " ";
	cout << endl;
	return 0;
}
