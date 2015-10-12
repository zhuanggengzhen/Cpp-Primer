#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	ifstream ifs1("./number.txt");
	ofstream ofs2("./even.txt"), ofs3("./odd.txt");
	istream_iterator<int> iit1(ifs1), eof;
	ostream_iterator<int> oit1(ofs2, "\n"), oit2(ofs3, " ");
	vector<int> vec;
	copy(iit1, eof, back_inserter(vec));
	copy_if(vec.begin(), vec.end(), oit1, [](const int &i){ return i % 2 == 0; });
	copy_if(vec.begin(), vec.end(), oit2, [](const int &i){ return i % 2 == 1; });
	return 0;
}
