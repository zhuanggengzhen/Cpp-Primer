#include <algorithm>
#include <iterator>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	istream_iterator<int> iit(cin), eof;
	ostream_iterator<int> oit(cout, "\n");
	vector<int> vs;
	copy(iit, eof, back_inserter(vs));
	sort(vs.begin(), vs.end());
	unique_copy(vs.begin(), vs.end(), oit);
	return 0;
}
