#ifndef EX_7_31_H
#define EX_7_31_H

class Y;

class X
{
	Y *y = nullptr;
};

class Y
{
	X x;
};

#endif
