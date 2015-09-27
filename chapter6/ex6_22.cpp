#include <iostream>

using std::cout;
using std::endl;

void swap(int *&p1, int *&p2)
{
	int *tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main()
{
	int i = 5, j = 10;
	int *p1 = &i, *p2 = &j;
	swap(p1, p2);
	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;
	return 0;
}
