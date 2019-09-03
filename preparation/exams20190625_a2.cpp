#include <vector>
#include <iostream>
#include <algorithm>

class document
{
protected:
    std::vector<std::string> authors;
    std::string date;

public:
    document(std::string a_date) : date(a_date) {}

    std::vector<std::string> get_authors()
    {
        return authors;
    }

    std::string get_date()
    {
        return date;
    }

    void add_author(std::string name)
    {
        authors.push_back(name);
    }

    virtual std::string info() = 0;

    bool operator<(const document &other) const
    {
        return this->authors[0] < other.authors[0];
    }
};

class book : public document
{
private:
    std::string title;

public:
    book(std::string a_date, std::string a_title) : document(a_date), title(a_title) {}

    std::string get_title()
    {
        return title;
    }

    std::string info()
    {
        std::string s = "BOOK-> Title: " + title + " Date: " + date + " Authors: ";
        for (std::string a : authors)
        {
            s += a + " ";
        }
        return s;
    }
};

class email : public document
{
private:
    std::string sender;
    std::string subject;
    std::vector<std::string> recipients;

public:
    email(std::string a_date, std::string a_sender, std::string a_subject) : document(a_date), sender(a_sender), subject(a_subject) {}

    std::string get_sender()
    {
        return sender;
    }

    std::string get_subject()
    {
        return subject;
    }

    std::vector<std::string> get_recipients() { return recipients; }

    void add_recipient(std::string name) { recipients.push_back(name); }

    std::string info()
    {
        std::string s = "EMAIL-> Subject: " + subject + " Sender: " + sender + " Recipients: ";
        for (std::string r : recipients)
        {
            s += r + " ";
        }
        s += "Date: " + date + " Authors: ";
        for (std::string a : authors)
        {
            s += a + " ";
        }
        return s;
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

    std::vector<document *> documents;
    documents.push_back(&b1);
    documents.push_back(&b2);
    documents.push_back(&e1);

    for (document *d : documents)
    {
        std::cout << d->info() << std::endl;
    }

    std::sort(documents.begin(), documents.end(), [](document *d1, document *d2) { return *d1 < *d2; });

    std::cout << "SORTED LIST" << std::endl;

    for (document *d : documents)
    {
        std::cout << d->info() << std::endl;
    }

    return 0;
}