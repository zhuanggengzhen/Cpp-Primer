#include <vector>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<char> vc{'h', 'e', 'l', 'l', 'o'};
	string str(vc.begin(), vc.end());
	cout << str << endl;
	return 0;
}
