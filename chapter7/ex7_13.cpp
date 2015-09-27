#include "ex7_12.h"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_data total(cin);
	if(!total.isbn().empty())
	{
		while(cin)
		{
			Sales_data trans(cin);
			if(total.isbn() == trans.isbn())
			{
				total = add(total, trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl; 
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
