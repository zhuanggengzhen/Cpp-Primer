#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

class Shorter
{
public:
	bool operator()(const string &s1, const string &s2) const { return s1.size() < s2.size(); }
};

class BiggerEqual
{
public:
	BiggerEqual(size_t size) : sz(size){ }
	bool operator()(string const &s) const 
	{
		return s.size() >= sz;
   	}
private:
	size_t sz;
};

class Print
{
public:
	void operator()(const string &s){ cout << s << " ";}
};

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
	stable_sort(word.begin(), word.end(), Shorter());
	auto it = find_if(word.begin(), word.end(), BiggerEqual(sz));
	auto count = word.end() - it;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	for_each(it, word.end(), Print());
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
