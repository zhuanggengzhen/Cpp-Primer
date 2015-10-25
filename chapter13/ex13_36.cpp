#include "ex13_36.h"
Message::Message(const Message& msg):contents(msg.contents), folders(msg    .folders)
{
    add_to_Folders(msg);
}
 
Message& Message::operator=(const Message &rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

Message::~Message()
{
    remove_from_Folders();
}
 
void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &msg)
{
     for(auto f : msg.folders)
	     f->addMsg(this);
}
 
void Message::remove_from_Folders()
{
     for(auto f : folders)
	     f->remMsg(this);
}

 
void swap(Message &lhs, Message &rhs)
{
     using std::swap;
     for(auto f : lhs.folders)
         f->remMsg(&lhs);
     for(auto f : rhs.folders)
         f->addMsg(&rhs);
     swap(lhs.contents, rhs.contents);
     swap(lhs.folders, rhs.folders);
     for(auto f : lhs.folders)
         f->addMsg(&lhs);
     for(auto f : rhs.folders)
         f->addMsg(&rhs);
}
				                                                           

Folder::Folder(const Folder &f):messages(f.messages)
{
	add_to_Message(f);
}

Folder &Folder::operator=(const Folder &rhs)
{
	remove_from_Message();
	messages = rhs.messages;
	add_to_Message(rhs);
	return *this;
}

void Folder::add_to_Message(const Folder &f)
{
	for(auto msg : f.messages)
		msg->addFldr(this);
}

void Folder::remove_from_Message()
{
	for(auto msg : messages)
		msg->remFldr(this);
}

Folder::~Folder()
{
	remove_from_Message();
}

void swap(Folder &lhs, Folder &rhs)
{
	using std::swap;
	for(auto msg : lhs.messages)
		msg->remFldr(&lhs);
	for(auto msg : rhs.messages)
		msg->remFldr(&rhs);
	swap(lhs.messages, rhs.messages);
	for(auto msg : lhs.messages)
		msg->addFldr(&lhs);
	for(auto msg : rhs.messages)
		msg->addFldr(&rhs);
}

