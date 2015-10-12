#include <vector>
#include <iostream>
#include <algorithm>
#include <forward_list>
using namespace std;

int main()
{
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9}, vi2, vi3;
	forward_list<int> fli;
	copy(vi.begin(), vi.end(), inserter(vi2, vi2.begin()));
	copy(vi.begin(), vi.end(), back_inserter(vi3));
	copy(vi.begin(), vi.end(), front_inserter(fli));
	for(auto &i : vi2)
		cout << i << " ";
	cout << endl;
	
	for(auto &i : vi3)
		cout << i << " ";
	cout << endl;

	for(auto &i : fli)
		cout << i << " ";
	cout << endl;

	return 0;
}
