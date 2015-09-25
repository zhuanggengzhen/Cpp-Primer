#include <iostream>
#include <string>
#include <string.h>
using std::cout;
using std::endl;
using std::string;

int main()
{
	//C++
	string str1{"working hard"};
	string str2{"enjoy yourself"};

	if(str1 == str2)
		cout << "Two strings are equal." << endl;
	else
		cout << "Two strings are not equal." << endl;

	//C
	char *s1 = "c type";
	char *s2 = "c type";

	if(strcmp(s1, s2) == 0)
		cout << "Two strings are equal." << endl;
	else
		cout << "Two strings are not equal." << endl;

	return 0;
}
