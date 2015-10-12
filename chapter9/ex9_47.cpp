#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string numbers("0123456789");
	string s("ab2c3d7R4E6");
	string::size_type pos = 0;
	while((pos = s.find_first_of(numbers, pos)) != string::npos)
	{
		cout << s[pos] << " ";
		pos++;
	}
	cout << endl;
	pos = 0;
	while((pos = s.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << s[pos] << " ";
		pos++;
	}
	cout << endl;
	return 0;
}
