#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char ch = ' ', f = ' ';
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, symCnt = 0, fxCnt = 0;
	while(cin >> std::noskipws >> ch)
	{
		switch(ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
				if(f == 'f')
					++fxCnt;
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case 'f':
				if(f == 'f')
					++fxCnt;
				break;
			case 'l':
				if(f == 'f')
					++fxCnt;
				break;
			case ' ':
			case '\n':
			case '\t':
				++symCnt;
				break;
			defalut:
				break;
		}
		f = ch;
	}
	cout << "the number of vowel a :\t" << aCnt << endl;
	cout << "the number of vowel e :\t" << eCnt << endl;
	cout << "the number of vowel i :\t" << iCnt << endl;
	cout << "the number of vowel o :\t" << oCnt << endl;
	cout << "the number of vowel u :\t" << uCnt << endl;
	cout << "the number of symbol:\t" << symCnt << endl;
	cout << "the number of fi/ff/fl:\t" << fxCnt << endl;
	return 0;
}
