#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::boolalpha;
int main()
{
	string s1 = "ok";
	string s2 = "test";
	const char *c1 = "ok";
	const char *c2 = "test";
	vector<string> vs{s1, s2};
	vector<string> vs2{s1, s2};
	vector<const char *> vc{c1, c2};
	vector<const char *> vc2{c1, c2};
	cout << &(*vc.cbegin()) << endl;
	cout << &(*vc2.cbegin()) << endl;
	cout << boolalpha << equal(vs.cbegin(), vs.cend(), vs2.cbegin()) << endl;
	cout << boolalpha << equal(vc.cbegin(), vc.cend(), vc2.cbegin()) << endl;

	return 0;
}
