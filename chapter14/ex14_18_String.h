#include <memory>

class String
{
	friend bool operator==(const String&, const String&);
	friend bool operator!=(const String&, const String&);
	friend bool operator<(const String&, const String&);
		
public:
	String() : String("") { };
	String(const char*);
	String(const String&);
	String(String&&) noexcept;
	String &operator=(String &&) noexcept;
	String &operator=(const String&);
	~String();
	char *begin() const { return elements;}
	char *end() const { return end_ptr; }
	size_t size() const { return end_ptr - elements; }
	size_t length() const { return end_ptr - elements - 1; }

private:
	void free();

private:
	static std::allocator<char> alloc;
	char *elements;
	char *end_ptr;
};
