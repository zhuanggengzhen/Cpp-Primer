#include <forward_list>
#include <iostream>
using std::cout;
using std::endl;
using std::forward_list;

int main()
{
	forward_list<int> fli{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	while(curr != fli.end())
	{
		if(*curr%2)
			curr = fli.erase_after(prev);
		else
			prev = curr++;
	}
	for(auto i : fli)
		cout << i << " ";
	cout << endl;
	return 0;
}
