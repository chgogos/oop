#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

class document
{
protected:
    vector<string> authors;
    string date;

public:
    document(string a_date) : date(a_date) {}

    vector<string> get_authors()
    {
        return authors;
    }

    string get_date()
    {
        return date;
    }

    void add_author(string name)
    {
        authors.push_back(name);
    }

    virtual string info() = 0;

    bool operator<(document &other)
    {
        return authors[0] < other.authors[0];
    }
};

class book : public document
{
private:
    string title;

public:
    book(string a_date, string a_title) : document(a_date), title(a_title) {}
    string get_title() { return title; }
    string info()
    {
        stringstream ss;
        ss << "Title: " << title;
        ss << " Date: " << date;
        ss << " Authors: ";
        for (string a : authors)
        {
            ss << a << " ";
        }
        return ss.str();
    }
};

class email : public document
{
private:
    string sender;
    string subject;
    vector<string> recipients;

public:
    email(string a_date, string a_sender, string a_subject) : document(a_date), sender(a_sender), subject(a_subject) {}
    string get_sender()
    {
        return sender;
    }
    string get_subject()
    {
        return subject;
    }
    vector<string> get_recipients()
    {
        return recipients;
    }
    void add_recipient(string recipient)
    {
        recipients.push_back(recipient);
    }
    string info()
    {
        stringstream ss;
        ss << "Sender: " << sender;
        ss << " Subject: " << subject;
        ss << " Recipients: ";
        for (string s : recipients)
        {
            ss << s << " ";
        }
        ss << "Date: " << date;
        ss << " Authors: ";
        for (string a : authors)
        {
            ss << a << " ";
        }
        return ss.str();
    }
};

int main()
{
    book b1("1/1/2010", "book1");
    b1.add_author("nikos");
    b1.add_author("maria");
    book b2("30/6/2015", "book2");
    b2.add_author("kostas");

    email e1("1/6/2017", "petros", "email1");
    e1.add_author("petros");
    e1.add_author("kostas");
    e1.add_recipient("maria");
    e1.add_recipient("nikos");

    vector<document *> v;
    v.push_back(&b1);
    v.push_back(&b2);
    v.push_back(&e1);

    sort(v.begin(), v.end(), [](auto d1, auto d2)
         { return *d1 < *d2; });

    cout << "SORTED BY FIRST AUTHOR NAME" << endl;

    for (auto d : v)
    {
        cout << d->info() << endl;
    }
}