#include "ex13_39.h"

std::allocator<std::string> StrVec::alloc;
void StrVec::push_back(const std::string &s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
	auto data = alloc.allocate(e - b);
	return {data, uninitialized_copy(b,e,data)};
}

void StrVec::free()
{
	if(elements)
	{
		auto p = first_free;
		for(size_t i = 0; i != size(); i++)
			alloc.destroy(--p);
		alloc.deallocate(elements, capacity());	
	}
}

StrVec::StrVec(const StrVec &sv)
{
	auto new_data = alloc_n_copy(sv.begin(), sv.end());	
	elements = new_data.first;
	cap = first_free = new_data.second;
}

StrVec::StrVec(initializer_list<std::string> il)
{
	auto new_data = alloc_n_copy(il.begin(), il.end());	
	elements = new_data.first;
	cap = first_free = new_data.second;
}

StrVec::~StrVec()
{
	free();
}

StrVec &StrVec::operator=(const StrVec &sv)
{
	auto data = alloc_n_copy(sv.begin(), sv.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? size()*2 : 1;
	auto new_data = alloc.allocate(newcapacity);
	auto dest = new_data;
	auto elem = elements;
	for(size_t i = 0; i != size(); i++)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = new_data;
	first_free = dest;
	cap = new_data + newcapacity;
}


int main()
{
	return 0;
}
