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

	auto size = vec.size();
	if(size % 2 != 0)
		size = size / 2 + 1;
	else 
		size /= 2;

	for(int i = 0; i != size; i++)
	{
		cout << vec[i] + vec[vec.size() - i - 1] << endl;
	}

	return 0;

}
