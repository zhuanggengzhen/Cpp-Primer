#include <string>

class Employee
{
public:
	Employee();
	Employee(const std::string &n);
	Employee(const Employee &) = delete;
	Employee &operator=(const Employee &) = delete;
private:
	std::string name;
	int id;
	static int increment;
};
