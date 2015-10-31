#include <memory>
#include <initializer_list>
#include <string>
#include <vector>
#include <exception>

class StrBlobPtr;
class StrBlob
{
	friend class StrBlobPtr;
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob():data(std::make_shared<std::vector<std::string>>()){ };
	StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){ };
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void push_back(const std::string &s) {data->push_back(s);}
	void pop_back()
	{
		check(0, "pop_back on empty StrBlob");
		data->pop_back();
	}
	std::string &front()
	{
		check(0, "front on empty StrBlob");
		data->front();
	}
	std::string &back()
	{
		check(0, "back on empty StrBlob");
		data->back();
	}
	const std::string &front() const 
	{
		check(0, "front on empty StrBlob");
		data->front();
	}
	const std::string &back() const
	{
		check(0, "back on empty StrBlob");
		data->back();
	}
	StrBlobPtr begin();
	StrBlobPtr end();
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type size, const std::string &s) const
	{
		if(size >= data->size())
			throw std::out_of_range(s);
	}
};

class StrBlobPtr
{
public:
	StrBlobPtr():curr(0){ };
	StrBlobPtr(StrBlob &a, std::size_t sz = 0):wptr(a.data), curr(sz){ };
	bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
	StrBlobPtr &operator++()
	{
		check(curr, "increment past end of StrBlobPtr");
		++curr;
		return *this;
	}
	StrBlobPtr operator++(int)
	{
		auto ret = *this;
		++*this;
		return ret;
	}
	StrBlobPtr &operator--()
	{
		check(curr, "decrement past end of StrBlobPtr");
		--curr;
		return *this;
	}
	StrBlobPtr operator--(int)
	{
		auto ret = *this;
		--*this;
		return ret;
	}
	std::string &deref() const
	{
		auto p = check(0, "deref on empty vector");
		return (*p)[curr];
	}
	StrBlobPtr &incr()
	{
		auto p = check(0, "incr on empty vector");
		curr++;
		return *this;
	}
private:
	std::shared_ptr<std::vector<std::string>> check(std::size_t size, const std::string &s) const
	{
		auto ret = wptr.lock();
		if(!ret)
			throw std::runtime_error("unbound StrBlobPtr");
		if(size >= ret->size())
			throw std::out_of_range(s);
		return ret;
	}
	std::size_t curr;
	std::weak_ptr<std::vector<std::string>> wptr;
};














