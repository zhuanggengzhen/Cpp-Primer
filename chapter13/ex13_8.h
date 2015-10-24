#include <string>

class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr &hp) : ps(new std::string(*(hp.ps))), i(hp.i) { }
	HasPtr &operator=(const HasPtr &rhs)
	{
		std::string *new_ps = new std::string(*rhs.ps);
		delete ps;//To avoid memory leaks
		ps = new_ps;
		i = rhs.i;
		return *this;
	}
private:
	std::string *ps;
	int i;
};
