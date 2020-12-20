#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "lexicon.hpp"

TEST_CASE("lexicon1", "by word length")
{
    Lexicon lex("test1.txt");
    REQUIRE(lex.words_by_length(2).size() == 3);
}

TEST_CASE("lexicon2", "starting with")
{
    Lexicon lex("test1.txt");
    REQUIRE(lex.words_starting_with("ab").size() == 6);
}

TEST_CASE("lexicon3", "ending with")
{
    Lexicon lex("test1.txt");
    REQUIRE(lex.words_ending_with("b").size() == 8);
}

TEST_CASE("lexicon4", "reccuring sequence")
{
    Lexicon lex("test1.txt");
    REQUIRE(lex.words_incl_seq("ab",2).size() == 2);
}

TEST_CASE("lexicon5", "pattern")
{
    Lexicon lex("test1.txt");
    REQUIRE(lex.words_incl_pattern("a-c-b").size() == 2);
}
