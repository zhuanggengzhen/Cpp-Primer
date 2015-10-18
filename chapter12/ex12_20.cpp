#include "ex12_19.h"
#include <fstream>
#include <iostream>
#include <string>

using std::ifstream;
using std::cout;
using std::endl;

int main()
{
	ifstream input("./ex12_20.txt");
	StrBlob sb;
	std::string word;
	while(getline(input, word))
		sb.push_back(word);
	for(auto bg = sb.begin(); bg != sb.end(); bg.incr())
		cout << bg.deref() << " ";
	cout << endl;
	return 0;
}
