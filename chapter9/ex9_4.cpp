#include <vector>
#include <iterator>

using std::vector;

bool find(vector<int>::iterator &bg, vector<int>::iterator &ed, const int &i)
{
	for(auto it = bg; it != ed; it++)
	{
		if(*it == i)
			return true;
	}
	return false;
}

int main()
{
	return 0;
}
