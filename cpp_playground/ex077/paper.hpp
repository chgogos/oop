#pragma once
#include <iostream>
#include <vector>
#include "researcher.hpp"

class researcher;

class paper
{
private:
    std::string title;
    std::string journal;
    std::vector<researcher *> authors;

    void add_author_internal(researcher *author);

public:
    paper(std::string t, std::string j) : title(t), journal(j)
    {
    }
    std::string get_title();
    std::string get_journal();
    std::vector<researcher *> get_authors();
    void add_author(researcher* author);
    void display_info();

    friend class researcher;
};
