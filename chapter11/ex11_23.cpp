#include <vector>
#include <map>
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::multimap;

void add_child(string &last_name, string &child_name, multimap<string, string> &family)
{
	family.insert({last_name, child_name});
}

void print(multimap<string, string> &family)
{
	for(auto m : family)
	{
		cout << "family : " << m.first << endl << "child : " << m.second << endl;
	}
}
int main()
{
	multimap<string, string> family;
	string last_name, child_name;
	int i;
	do
	{
		cout << "what do you want to do?\n" << "0 : quit\n1 : add add child\n";
		cin >> i;
		if(i == 1)
		{
			cout << "please enter the last name : ";
			cin >> last_name;
			cout << "please enter the child name : ";
			cin >> child_name;
			add_child(last_name, child_name, family);
		}
		else if(i == 0)
			break;
		else 
		{
			cout << "please enter the correct number" << endl;
			continue;
		}
	}while(i != 0);
	print(family);
	return 0;
}
