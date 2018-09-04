#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <set>
using std::set;

class Folder;

class Message {
    friend class Folder;
    friend swap(Message &, Message &);
public:
    explicit Message(const string &str = ""):
        contents(str) { }
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();

    void save(Folder&);
    void remove(Folder&);
private:
    string contents;
    set<Folder*> folders;

    void addFldr(Folder *f) { folders.insert(f); }
    void remFldr(Folder *f) { folders.erase(f); }

    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

void swap(Message &lhs, Message &rhs);

class Folder {
    friend void swap(Folder&, Folder&);
    friend class Message;
public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
private:
    set<Message*> msgs;

    void add_to_Messages(const Folder&);
    void remove_from_Messages();

    void addMsg(Message *m) { msgs.insert(m); }
    void remMsg(Message *m) { msgs.erase(m); }
};

void swap(Folder&, Folder&);

void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);
    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
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

void Message::add_to_Folders(const Message &m)
{
    for (auto f : m.folders)
        f->addMsg(this);
}

Message::Message(const Message &m):
    contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}

void Message::remove_from_Folders()
{
    for (auto f : folders)
        f->remMsg(this);
}

Message::~Message()
{
    remove_from_Folders();
}

Message& Message::operator=(const Message &rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Folder &lhs, Folder &rhs)
{
    using std::swap;
    for (auto m : lhs.msgs)
        m->remFldr(&lhs);
    for (auto m : rhs.msgs)
        m->remFldr(&rhs);
    swap(lhs.msgs, rhs.msgs);
    for (auto m : lhs.msgs)
        m->addFldr(&lhs);
    for (auto m : rhs.msgs)
        m->addFldr(&rhs);
}

void Folder::add_to_Messages(const Folder &f)
{
    for (auto m : f.msgs)
        m->addFldr(this);
}

Folder::Folder(const Folder &f):
    msgs(f.msgs)
{
    add_to_Messages(f);
}

void Folder::remove_from_Messages()
{
    for (auto m : msgs)
        m->remFldr(this);
}

Folder::~Folder()
{
    remove_from_Messages();
}

Folder& Folder::operator=(const Folder &rhs)
{
    remove_from_Messages();
    msgs = rhs.msgs;
    add_to_Messages(rhs);
    return *this;
}

int main()
{

}
