#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &);

int main()
{
	vector<string> vs;
	string str;
	while(cin >> str)
		vs.push_back(str);
	elimDups(vs);
	for(auto &s : vs)
		cout << s << " ";
	cout << endl << vs.size() << endl << vs.capacity() << endl;
	return 0;
}

void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	vector<string>::iterator it = unique(vs.begin(), vs.end());
	vs.erase(it, vs.end());	
}
