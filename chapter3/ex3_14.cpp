#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int i = 0;
	vector<int> vec;
	while(cin >> i)
	{
		vec.push_back(i);
	}
	return 0;
}
