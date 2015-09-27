#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int i, j;
	cin >> i >> j;
	try
	{
		if(j == 0)
			throw runtime_error("the divisor can not be zero\n");
		cout << i/j << endl;
	}
	catch(runtime_error err)
	{
		cout << err.what();
	}
	return 0;
}
