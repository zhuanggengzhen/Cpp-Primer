#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int a[10] = {0};
	int b[10] = {0};
	
	for(int i = 0; i < 10; i++)
	{
	//	cout << a[i] << " ";
		a[i] = i;
		cout << a[i] << " ";	
	}
	cout << endl;

	for(int i = 0; i < 10; i++)
	{
		b[i] = a[i];
		cout << b[i] << " ";
	}
	cout << endl;

	//vector
	vector<int> vec;
	for(int i = 0; i < 10; vec.push_back(i), i++);
	for(auto tmp : vec)
		cout << tmp << " ";
	cout << endl;
	return 0;
}
