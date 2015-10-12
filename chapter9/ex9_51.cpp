#include <string>
#include <iostream>

class Time
{
public:
	Time(std::string str);
	void print();
private:
	unsigned year;
	unsigned month;
	unsigned date;
};

void Time::print()
{
	std::cout << year << "-" << month << "-" << date << std::endl;
}

Time::Time(std::string str)
{
	std::string numbers("0123456789");
	std::string::size_type pos = 0;
	if((pos = str.find_first_of(numbers, pos)) == 0)
	{
		month = std::stoi(str.substr(pos, 1));
		++pos;
	}
	else
	{
		pos = 0;
		std::string m = str.substr(0, 3);
		if(m == "Jan")
			month = 1;
		else if(m == "Feb")
			month = 2;
		else if(m == "Mar")
			month = 3;
		else if(m == "Apr")
			month = 4;
		else if(m == "May")
			month = 5;
		else if(m == "Jun")
			month = 6;
		else if(m == "Jul")
			month = 7;
		else if(m == "Aug")
			month = 8;
		else if(m == "Sep")
			month = 9;
		else if(m == "Oct")
			month = 10;
		else if(m == "Nov")
			month = 11;
		else if(m == "Dec")
			month = 12;
		
	}

	pos = str.find_first_of(numbers, pos);
	date = std::stoi(str.substr(pos, 1));
	++pos;
	pos = str.find_first_of(numbers, pos);
	year = std::stoi(str.substr(pos, 4));
}

int main()
{
	Time t1("January 1, 1900");
	Time t2("1/1/1900");
	Time t3("Jan 1 1900");
	t1.print();
	t2.print();
	t3.print();
	return 0;
}
