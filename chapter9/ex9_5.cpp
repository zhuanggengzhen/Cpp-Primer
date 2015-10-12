#include <vector>
#include <iterator>
#include <iostream>

using std::vector;

vector<int>::iterator find(vector<int>::iterator &bg, vector<int>::iterator &ed, const int &i)
{
	for(auto it = bg; it != ed; it++)
	{
		if(*it == i)
			return it;
	}
	std::cerr << "can not find i" << std::endl;
	return ed;
}

int main()
{
	return 0;
}
