#include "paper.hpp"

void paper::add_author_internal(researcher *author)
{
    authors.push_back(author);
}

std::string paper::get_title()
{
    return title;
}

std::string paper::get_journal()
{
    return journal;
}

std::vector<researcher *> paper::get_authors()
{
    return authors;
}

void paper::add_author(researcher *author)
{
    author->add_paper(this);
}

void paper::display_info()
{
    int i = 0;
    std::cout << title << ", " << journal << std::endl;
    for (auto a : authors)
    {
        std::cout << ++i << ". " << a->get_name() << " " << a->get_affiliation() << std::endl;
    }
}
