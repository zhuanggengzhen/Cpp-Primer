#include <iostream>

using std::cout;
using std::endl;

void reset(int &i)
{
	i = 0;
}

int main()
{
	int i = 10;
	cout << "i = " << i << endl;
	reset(i);
	cout << "i = " << i << endl;
	return 0;
}
