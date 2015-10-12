#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

string make_plural(int b, const string &str, const string &ending)
{
	return b == 1 ? str : (str + ending);
}
void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	vector<string>::iterator it = unique(vs.begin(), vs.end());
	vs.erase(it, vs.end());
}

void biggest(vector<string> &word, vector<string>::size_type sz)
{
	elimDups(word);
	stable_sort(word.begin(), word.end(), 
			[](const string &s1, const string &s2)
			{ return s1.size() < s2.size(); });
	auto it = partition(word.begin(), word.end(), 
			[sz](const string &s)
			{ return s.size() >= sz; });
	auto count = it - word.begin();
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	for_each(word.begin(), it, 
			[](const string& s)
			{ cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vs;
	string str;
	while(cin >> str)
		vs.push_back(str);
	biggest(vs, 5);
	return 0;
}
