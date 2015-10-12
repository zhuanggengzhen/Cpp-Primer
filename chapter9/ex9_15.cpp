#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec1{0, 1, 2, 3, 4};
	vector<int> vec2{0, 1, 2, 3, 4};
	if(vec1 == vec2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}
