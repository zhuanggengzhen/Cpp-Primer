#include "ex14_7.h"
#include <iostream>
std::allocator<char> String::alloc;

std::ostream &operator<<(std::ostream &os, const String &s)
{
	for(auto b = s.elements; b != s.end_ptr; b++)
		os << *b;
	return os;
} 

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
	std::cout << "copy\n";
	auto data = alloc.allocate(str.end_ptr - str.elements);
	auto e = std::uninitialized_copy(str.elements, str.end_ptr, data);
	elements = data;
	end_ptr = e;
}

String::String(String &&str) noexcept
{
	std::cout << "move constructor\n";
	elements = str.elements;
	end_ptr = str.end_ptr;
	str.elements = str.end_ptr = nullptr;
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
	auto data = alloc.allocate(str.end_ptr - str.elements);
	auto e = std::uninitialized_copy(str.elements, str.end_ptr, data);
	free();
	elements = data;
	end_ptr = e;
	return *this;
}

String &String::operator=(String &&str) noexcept
{
	std::cout << "move assignment operator\n";
	if(this != &str)
	{
		free();
		elements = str.elements;
		end_ptr = str.end_ptr;
		str.elements = str.end_ptr = nullptr;
	}
	return *this;
}

int main()
{
 	return 0;
}
