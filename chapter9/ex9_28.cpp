#include <forward_list>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void fun(forward_list<string> &fls, const string &s1, const string &s2)
{
	auto prev = fls.before_begin();
	auto curr = fls.begin();
	while(curr != fls.end())
	{
		if(*curr == s1)
		{
			fls.insert_after(curr, s2);
			return;
		}
		else
			prev = curr++;
	}
	fls.insert_after(prev, s2);
}

int main()
{
	forward_list<string> fls{"a", "b", "c", "e", "f"};
	fun(fls, "c", "d");
	for(auto i : fls)
		cout << i << " ";
	cout << endl;
	return 0;
}
