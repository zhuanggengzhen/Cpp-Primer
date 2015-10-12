#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using namespace std::placeholders;
bool check_size(const string &s, const int &i)
{
	return i > s.size();
}

int main()
{
	vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	string str;
	cin >> str;
	auto it = find_if(vi.begin(), vi.end(), bind(check_size, str, _1));
	cout << (it != vi.end() ? *it : -1) << endl;
	return 0;
}
