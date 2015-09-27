#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int max(const int i, const int *const p)
{
	return (i > *p) ? i : *p;
}

int main()
{
	int i, j;
	cin >> i >> j;
	cout << "max : " << max(i, &j) << endl;
	return 0;
}
