#include <stdio.h>

struct phonebook_entry
{
    char *name;
    char *surname;
    char *tel;
};

struct phonebook_entry phonebook[] =
    {
        {"Kirk", "Hammett", "555-1234"},
        {"Lars", "Ulrich", "555-5678"},
        {"James", "Hetfield", "555-1122"},
        {"Robert", "Trujillo", "555-7788"}};

void dump(struct phonebook_entry *input)
{
    for (int i = 0; i < sizeof(phonebook) / sizeof(struct phonebook_entry); i++)
        printf("%s %s - %s\n", input[i].name, input[i].surname, input[i].tel);
}

int main()
{
    dump(phonebook);
}

/*
irk Hammett - 555-1234
Lars Ulrich - 555-5678
James Hetfield - 555-1122
Robert Trujillo - 555-7788
*/