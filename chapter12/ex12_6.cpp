#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> *factory()
{
	return new vector<int>();
}

void input(vector<int> *vp)
{
	int temp;
	while(cin >> temp)
		vp->push_back(temp);
}

void print(vector<int> *vp)
{
	for(auto i : *vp)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> *vp = factory();
	input(vp);
	print(vp);
	delete vp;
	return 0;
}
