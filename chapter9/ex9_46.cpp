#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

string fun(const string &name, const string &prefix, const string &suffix)
{
	string temp(name);
	temp.insert(0, prefix);
	temp.insert(temp.size(), suffix);
	return temp;
}

int main()
{
	string name("Beautiful");
	cout << fun(name, "Ms.", ".III") << endl;
	return 0;
}
