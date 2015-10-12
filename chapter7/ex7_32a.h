#ifndef EX_7_32_SCREEN_H
#define EX_7_32_SCREEN_H

#include <string>
#include <iostream>
#include "ex7_32b.h"

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);

public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd):height(ht), width(wd), contents(ht * wd, ' '){ }
	Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd, c){ }
	char get() const{ return contents[cursor];}
	char get(pos r, pos c) const{return contents[r * width + c];}
	Screen move(pos r, pos c)
	{
		cursor = r * width + c;
		return *this;
	}
	Screen set(char c)
	{
		contents[cursor] = c;
		return *this;
	}
	Screen display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}

private:
	void do_display(std::ostream &os) const
	{
		os << contents;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

#endif
