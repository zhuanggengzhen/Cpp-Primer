#include <string>
#include <set>

class Folder;
class Message
{
	friend class Folder;
	friend void swap(Folder&, Folder&);
	friend void swap(Message&, Message&);
public:
    explicit Message(const std::string& str = ""):contents(str) {}
    Message(const Message&);
	Message(Message&&) noexcept;
    Message &operator=(const Message&);
	Message &operator=(Message&&) noexcept;
    ~Message();
    void save(Folder&);
    void remove(Folder&);
private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
    void addFldr(Folder *f){folders.insert(f);}
    void remFldr(Folder *f){folders.erase(f);}
};
 
void swap(Message &lhs, Message &rhs);

class Folder
{
	friend class Message;
	friend void swap(Folder&, Folder&);
	friend void swap(Message&, Message&);
public:
	Folder() = default;
	Folder(const Folder&);
	Folder &operator=(const Folder&);
	~Folder();
private:
	std::set<Message*> messages;
	void add_to_Message(const Folder&);
	void remove_from_Message();
	void addMsg(Message *msg){messages.insert(msg);}
	void remMsg(Message *msg){messages.erase(msg);}
};

void swap(Folder&, Folder&);
