#include <memory>
#include <iostream>

class String
{
	friend std::ostream &operator<<(std::ostream &os, const String &s);
public:
	String() : String("") { };
	String(const char*);
	String(const String&);
	String(String&&) noexcept;
	String &operator=(String &&) noexcept;
	String &operator=(const String&);
	~String();
	char *begin() { return elements;}
	char *end() { return end_ptr; }
	size_t size() { return end_ptr - elements; }
	size_t length() { return end_ptr - elements - 1; }

private:
	void free();

private:
	static std::allocator<char> alloc;
	char *elements;
	char *end_ptr;
};

