#include <iostream>
#include <string>
#include <vector>
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
};

class book : public document
{
private:
    string title;

public:
    book(string a_date, string a_title) : document(a_date), title(a_title) {}
    string get_title()
    {
        return title;
    }
    string info()
    {
        string s = "BOOK Title: " + title + " Date: " + date + " Authors: ";
        for (string a : authors)
        {
            s += a + " ";
        }
        return s;
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
    void add_recipient(string name)
    {
        recipients.push_back(name);
    }
    string info()
    {
        string s = "EMAIL Subject: " + subject + " Sender: " + sender + " Recipients:";
        for (string r : recipients)
        {
            s += r + " ";
        }
        s += "Date: " + date + " Authors: ";
        for (string a : authors)
        {
            s += a + " ";
        }
        return s;
    }
};

int main()
{
    book b1("1/1/2020", "book1");
    b1.add_author("maria");
    b1.add_author("sofia");
    cout << b1.info() << endl;

    email e1("2/1/2020", "Chris", "This is a test");
    e1.add_author("Chris");
    e1.add_author("Nikos");
    e1.add_recipient("Maria");
    e1.add_recipient("Petros");
    cout << e1.info() << endl;
}
