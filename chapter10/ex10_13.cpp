#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool mySort(const string &str)
{
	return str.size() >= 5;
}

int main()
{
	string str;
	vector<string> vec;
	while(cin >> str)
		vec.push_back(str);
	auto true_end = partition(vec.begin(), vec.end(), mySort);
	for(auto it = vec.begin(); it != true_end; ++it)
		cout << *it << endl;
	return 0;
}
