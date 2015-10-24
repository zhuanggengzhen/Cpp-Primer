#include "ex12_27.h"

int main()
{
	std::ifstream ifs("./test.txt");
	TextQuery tq(ifs);
	print(std::cout, tq.query("apple"));
	return 0;
}
