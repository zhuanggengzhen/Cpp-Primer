#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using int_array = int [4];
int main()
{
	int a[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	//version 1
	for(int_array &i : a)
		for(int j : i)
			cout << j << " ";
	cout << endl;

	//version 2
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
			cout << a[i][j] << " ";
	}
	cout << endl;

	//version 3
	int *p = &a[0][0];
	for(int i = 0; i < 12; i++)
	{
		cout << *p++ << " ";
	}
	cout << endl;
	return 0;
}
