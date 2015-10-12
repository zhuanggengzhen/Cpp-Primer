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
bool isShorter(const string &, const string &);

int main()
{
	vector<string> vs;
	string str;
	while(cin >> str)
		vs.push_back(str);
	elimDups(vs);
	stable_sort(vs.begin(), vs.end(), isShorter);
	for(auto &s : vs)
		cout << s << " ";
	cout << endl;
	return 0;
}

void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	vector<string>::iterator it = unique(vs.begin(), vs.end());
	vs.erase(it, vs.end());	
}

bool isShorter(const string &str1, const string &str2)
{
	return str1.size() < str2.size();
}
