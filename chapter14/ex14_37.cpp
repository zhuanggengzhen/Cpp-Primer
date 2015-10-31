#include <vector>
#include <algorithm>
#include <iostream>
class IsEqual
{
public:
	IsEqual(int i) : value(i){}
	bool operator()(int elem){ return elem == value; }
private:
	int value;
};

int main()
{
	std::vector<int> v = {0, 1, 1, 1, 1, 1, 1, 1};
	std::replace_if(v.begin(), v.end(), IsEqual(1), 99);
	for(auto i : v)
		std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}
