#include <list>
#include <algorithm>
#include <string>

using namespace std;

void elimDups(list<string> &word)
{
	word.sort();
	word.unique();
}

int main()
{
	
	return 0;
}
