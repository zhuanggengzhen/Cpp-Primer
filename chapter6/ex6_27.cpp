#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int summary(initializer_list<int> il)
{
	int sum = 0;
	for(const auto &i : il)
		sum += i;
	return sum;
}
int main()
{
	cout << "summary : " << summary({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
	cout << "summary : " << summary({2, 4, 6, 8}) << endl;
	return 0;
}
