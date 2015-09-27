#include "ex7_11.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_data sd1;
	print(cout, sd1) << endl;

	Sales_data sd2("978-7-5477-1304-4");
	print(cout, sd2) << endl;
	
	Sales_data sd3("978-7-5477-1304-4", 100, 32.8);
	print(cout, sd3) << endl;
	
	Sales_data sd4(cin);
	print(cout, sd4) << endl;

	return 0;
}
