#include <vector>
#include <string>

class Lexicon
{
private:
    std::vector<std::string> words;

public:
    Lexicon(std::string fn);
    std::vector<std::string> words_by_length(int length);
    std::vector<std::string> words_starting_with(std::string str);
    std::vector<std::string> words_ending_with(std::string str);
    std::vector<std::string> words_incl_seq(std::string str, int times);
    std::vector<std::string> words_incl_pattern(std::string str);
};