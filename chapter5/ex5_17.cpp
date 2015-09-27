#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec1{0, 1, 1, 2}, vec2{0, 1, 1, 2, 3, 5, 8};
	if(vec1.size() == vec2.size())
	{
		if(vec1 != vec2)
			cout << "the size of two vectors are equal, but the elements of them are not equal" << endl;
		else
			cout << "two vectors are equal" << endl;
	}
	else if(vec1.size() < vec2.size())
	{
		for(int i = 0; i != vec1.size(); ++i)
		{
			if(vec1[i] != vec2[i])
			{
				cout << "vector 1 is not the prefix of vector 2" << endl;
				return -1;
			}
		}
		cout << "vector 1 if the prefix of vector 2" << endl;
	}
	else
	{
		for(int i = 0; i != vec2.size(); ++i)
		{
			if(vec1[i] != vec2[i])
			{
				cout << "vector 2 is not the prefix of vector 1" << endl;
				return -1;
			}
		}
		cout << "vector 2 if the prefix of vector 1" << endl;
	}
	return 0;
}
