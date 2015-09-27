#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int grade = 0;
	while(cin >> grade)
	{
		if(grade == 100)
			cout << "A++" << endl;
		else if(grade >= 90)
			cout << "A" << endl;
		else if(grade >= 80)
			cout << "B" << endl;
		else if(grade >= 70)
			cout << "C" << endl;
		else if(grade >= 60)
			cout << "D" << endl;
		else 
			cout << "F" << endl;
	}
	return 0;
}
