#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
{
	if((pe1 - pb1) != (pe2 - pb2))
		return false;
	for(int *i = pb1, *j = pb2; i != pe1 && j != pe2; i++, j++)
	{
		if(*i != *j)
			return false;
	}
	return true;
}

int main()
{
	int arr1[] = {0, 0, 7};
	int arr2[] = {0, 1, 0};

	if(compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "Two arrays are equal" << endl;
	else
		cout << "Two arrays are not equal" << endl;
	
	vector<int> vec1{0, 0, 7};
	vector<int> vec2{0, 0, 7};
	
	if(vec1 == vec2)
		cout << "Two vectors are equal" << endl;
	else
		cout << "Two vectors are not equal" << endl;

	return 0;
}
