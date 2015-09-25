#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
	char s1[] = "test one ";
	char s2[] = "test two";
	char s3[sizeof(s1) + sizeof(s2) - 1];
	strcpy(s3, s1);
	strcat(s3, s2);
	for(auto c : s3)
		cout << c;
	cout << endl;
	return 0;
}
