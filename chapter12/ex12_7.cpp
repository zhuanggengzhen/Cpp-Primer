#include <vector>
#include <iostream>
#include <memory>

using std::make_shared;
using std::shared_ptr;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

shared_ptr<vector<int>> factory()
{
	return make_shared<vector<int>>();
}

void input(shared_ptr<vector<int>> vp)
{
	int temp;
	while(cin >> temp)
		vp->push_back(temp);
}

void print(shared_ptr<vector<int>> vp)
{
	for(auto i : *vp)
		cout << i << " ";
	cout << endl;
}

int main()
{
	shared_ptr<vector<int>> vp = factory();
	input(vp);
	print(vp);
	return 0;
}
