#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	int tmp = 0;

	for(auto tmp : v1)
		cout << tmp << " ";
   	cout << endl;	
	
	for(auto tmp : v2)
		cout << tmp << " ";
   	cout << endl;	

	for(auto tmp : v3)
		cout << tmp << " ";
   	cout << endl;	

	for(auto tmp : v4)
		cout << tmp << " ";
   	cout << endl;	

	for(auto tmp : v5)
		cout << tmp << " ";
   	cout << endl;	
	
	for(auto tmp : v6)
		cout << tmp << " ";
   	cout << endl;	
	
	for(auto tmp : v7)
		cout << tmp << " ";
   	cout << endl;	

	return 0;
}
