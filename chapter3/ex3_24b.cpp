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
	vector<int> vec;
	int tmp = 0;
	for(int i = 0; cin >> tmp && i < 10; i++)
	{
		vec.push_back(tmp);
	}
	
	if(vec.empty())
	{
		cout << "input at least one integer." << endl;
		return -1;
	}

	if(vec.size() == 1)
	{
		cout << "only one integer " << vec[0] << ",it doesn't have any adjacent elements." << endl;
		return -1;
	}

	for(auto it1 = vec.begin(), it2 = vec.end() - 1; it1 <= it2; it1++, it2--)
	{
		cout << *it1 + *it2 << endl;
	}
	return 0;
}
