#include "ex14_18_String.h"
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

bool operator==(const String &lhs, const String &rhs)
{
	if(lhs.size() != rhs.size())
		return false;
	for(auto b1 = lhs.begin(), b2 = rhs.begin(); b1 != lhs.end() && b2 != rhs.end(); b1++, b2++)
		if(*b1 != *b2)
			return false;
	return true;	
}

bool operator!=(const String &lhs, const String &rhs)
{
	if(lhs == rhs)
		return false;
	else 
		return true;
}

bool operator<(const String &lhs, const String &rhs)
{
	if(lhs == rhs)
		return false;
	for(auto b1 = lhs.begin(), b2 = rhs.begin(); b1 != lhs.end() && b2 != rhs.end(); b1++, b2++)
		if(*b1 > *b2)
			return false;
	if(lhs.size() == rhs.size())
		return true;	
	else
		return lhs.size() < rhs.size() ? true : false;
}

int main()
{
	return 0;
}
