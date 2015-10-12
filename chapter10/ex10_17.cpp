#include "../chapter7/ex7_41.h"
#include <vector>
#include <algorithm>
using std::vector;
using std::endl;
using std::cout;

int main()
{
	vector<Sales_data> vec;
	Sales_data s1("1234567", 10, 9), s2("7654321", 10, 8), s3("7777777", 7, 7.7);
	vec.push_back(s3);
	vec.push_back(s1);
	vec.push_back(s2);
	stable_sort(vec.begin(), vec.end(), 
			[](const Sales_data &s1, const Sales_data &s2)
			{ return s1.isbn().size() < s2.isbn().size(); });
	for(auto s : vec)
		print(cout, s) << endl;
	return 0;
}
