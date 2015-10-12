#include <iostream>
#include <string>
#include <fstream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
struct Sales_data 
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main(int argc, char **argv)
{
	string fileName = argv[1];
	string fileName2 = argv[2];
	ifstream ifs(fileName);
	ofstream ofs(fileName2);
	Sales_data total;
	if(ifs >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while(ifs >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if(total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				ofs << total.bookNo << " "
					 << total.units_sold << " "
					 << total.revenue << endl;
				total = trans;
			}
		}
		ofs  << total.bookNo << " "
			 << total.units_sold << " "
			 << total.revenue << endl; 
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
