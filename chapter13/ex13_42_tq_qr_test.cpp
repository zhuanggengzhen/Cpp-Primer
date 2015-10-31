#include "ex13_42_tq_qr.h"

int main()
{
	std::ifstream ifs("../chapter12/test.txt");
	TextQuery tq(ifs);
	print(std::cout, tq.query("apple"));
	return 0;
}
