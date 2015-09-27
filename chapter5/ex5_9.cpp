#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char ch = ' ';
	int count = 0;
	while(cin >> ch)
	{
		if(ch == 'a')
			++count;
		if(ch == 'e')
			++count;
		if(ch == 'i')
			++count;
		if(ch == 'o')
			++count;
		if(ch == 'u')
			++count;
	}
	cout << "the number of vowel :\t" << count << endl;
	return 0;
}
