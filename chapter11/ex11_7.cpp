#include <vector>
#include <map>
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;

void add_family(string last_name, map<string, vector<string>> &family)
{
	family[last_name] = vector<string>();
}

void add_child(string last_name, string name, map<string, vector<string>> &family)
{
	family[last_name].push_back(name);
}

void print(map<string, vector<string>> &family)
{
	for(auto m : family)
	{
		cout << "family : " << m.first << endl << "child : ";
		for(auto s : m.second)
		{
			cout << s << " ";
		}
		cout << endl;
	}
}
int main()
{
	vector<string> child;
	map<string, vector<string>> family;
	string last_name, child_name;
	int i;
	do
	{
		cout << "what do you want to do?\n" << "0 : quit\n1 : add family\n2 : add child name\n";
		cin >> i;
		if(i ==  1)
		{
			cout << "please enter the last name : ";
			cin >> last_name;
			add_family(last_name, family);
		}
		else if(i == 2)
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
