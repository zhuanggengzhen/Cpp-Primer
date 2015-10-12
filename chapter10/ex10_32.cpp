#include <algorithm>
#include <vector>
#include <iostream>
#include "../Sales_item.h"
#include <numeric>
using namespace std;
using namespace std::placeholders;
int main()
{
	Sales_item si;
	vector<Sales_item> vec;
	while(cin >> si)
		vec.push_back(si);
	sort(vec.begin(), vec.end(), bind(compareIsbn, _1, _2));
	for(auto begin = vec.cbegin(), end = begin; begin != vec.cend(); begin = end)
	{
		end = find_if(begin, vec.cend(), [begin](const Sales_item &s){ return begin->isbn() != s.isbn(); });
		cout << accumulate(begin, end, Sales_item(begin->isbn())) << endl;
	}
	return 0;
}
