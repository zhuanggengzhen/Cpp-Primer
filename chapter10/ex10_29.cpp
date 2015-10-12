#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	ifstream ifs("./test.txt");
	istream_iterator<string> ist(ifs), eof;
	ostream_iterator<string> ost(cout, "\n");
	vector<string> vs;
	copy(ist, eof, back_inserter(vs));
	copy(vs.begin(), vs.end(), ost);

	return 0;
}
