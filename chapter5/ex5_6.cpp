#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int grade = 0;
	string level;
	while(cin >> grade)
	{
		level = (grade == 100) ? "A++" 
			: (grade >= 90) ? "A"
			: (grade >= 80) ? "B"
			: (grade >= 70) ? "C"
			: (grade >= 60) ? "D" : "F";
			cout << level << endl;
	}
	return 0;
}
