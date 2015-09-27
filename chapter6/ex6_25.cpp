#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	if(argc != 3)
		return -1;
	string str{argv[1]};
	cout << str + argv[2] << endl;
	return 0;
}
