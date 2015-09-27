#include <iostream>

using std::cout;
using std::endl;

void swap(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int i = 5, j = 10;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	swap(&i, &j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	return 0;
}
