#include "lexicon.hpp"
#include <fstream>
#include <regex>
#include <iostream>

Lexicon::Lexicon(std::string fn)
{
    std::ifstream ifs(fn);
    std::string w;
    while (ifs >> w)
    {
        words.push_back(w);
    }
    ifs.close();
}

std::vector<std::string> Lexicon::words_by_length(int length)
{
    std::vector<std::string> selected;
    for (std::string w : words)
    {
        if (w.length() == length)
        {
            selected.push_back(w);
        }
    }
    return selected;
}
std::vector<std::string> Lexicon::words_starting_with(std::string str)
{
    std::vector<std::string> selected;
    for (std::string w : words)
    {
        if (std::regex_match(w, std::regex("^" + str + ".*")))
        {
            selected.push_back(w);
        }
    }
    return selected;
}
std::vector<std::string> Lexicon::words_ending_with(std::string str)
{
    std::vector<std::string> selected;
    for (std::string w : words)
    {
        if (std::regex_match(w, std::regex(".*" + str + "$")))
        {
            selected.push_back(w);
        }
    }
    return selected;
}

std::vector<std::string> Lexicon::words_incl_seq(std::string str, int times)
{
    std::vector<std::string> selected;
    for (std::string w : words)
    {
        if (std::regex_match(w, std::regex(".*(" + str + "){" + std::to_string(times) + "}.*")))
        {
            selected.push_back(w);
        }
    }
    return selected;
}
std::vector<std::string> Lexicon::words_incl_pattern(std::string str)
{
    std::vector<std::string> selected;
    replace(str.begin(), str.end(), '-', '.');
    std::cout << str << std::endl;
    for (std::string w : words)
    {
        if (std::regex_match(w, std::regex(".*" + str + ".*")))
        {
            selected.push_back(w);
        }
    }
    return selected;
}