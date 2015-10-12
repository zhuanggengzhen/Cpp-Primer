#include <string>
#include <iostream>
#include <fstream>
using std::ifstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
	string asc_desc{"bdfhijkltgpqy"};
	string word;
	ifstream ifs(argv[1]);
	ifs >> word;
	cout << word << endl;
	string::size_type begin_pos = 0, end_pos = 0, length = 0, max_begin, max_end;
	while(end_pos != string::npos && begin_pos != string::npos)
	{
		begin_pos = word.find_first_not_of(asc_desc, end_pos);
		if(begin_pos != string::npos)
			end_pos = word.find_first_of(asc_desc, begin_pos);
		else
			break;

		if(end_pos == string::npos)
		{
			if(length < word.size() - begin_pos - 1)
			{
				max_begin = begin_pos;
				max_end = word.size() - 1;
			}
		}
		else
		{
			if(length < end_pos - begin_pos)
			{
				max_begin = begin_pos;
				max_end = end_pos;
				length = end_pos - begin_pos;
			}
		}
	}
	string out(word, max_begin, max_end - max_begin);
	cout << out << endl;
}
