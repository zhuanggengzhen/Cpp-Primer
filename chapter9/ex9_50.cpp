#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> vec{"0.1", "99.1", "100.1"};
	int sumi = 0;
   	float sumf = 0;
	for(auto i : vec)
	{
		sumi += stoi(i);
		sumf += stof(i);
	}
	cout << sumi << endl;
	cout << sumf << endl;
	return 0;
}
