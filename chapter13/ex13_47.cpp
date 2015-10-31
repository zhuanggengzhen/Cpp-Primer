#include "ex13_47.h"
#include <iostream>

std::allocator<char> String::alloc;

String::String(const char *p)
{
	auto begin = p;
	while(*p)
		p++;
	auto data = alloc.allocate(p - begin);
	auto e = std::uninitialized_copy(begin, p, data);
	elements = data;
	end_ptr = e;
}

String::String(const String &str)
{
	std::cout << "copy constructor\n";
	auto data = alloc.allocate(str.end_ptr - str.elements);
	auto e = std::uninitialized_copy(str.elements, str.end_ptr, data);
	elements = data;
	end_ptr = e;
}

void String::free()
{
	if(elements)
		for(auto i = elements; i != end_ptr; i++)
			alloc.destroy(i);
	alloc.deallocate(elements, end_ptr - elements);
}

String::~String()
{
	free();
}

String &String::operator=(const String &str)
{
	std::cout << "copy assignment operator\n";
	auto data = alloc.allocate(str.end_ptr - str.elements);
	auto e = std::uninitialized_copy(str.elements, str.end_ptr, data);
	free();
	elements = data;
	end_ptr = e;
	return *this;
}

