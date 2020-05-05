#include "../catch.hpp"
#include "linked_list.hpp"

TEST_CASE("linked_list1", "[push_front, length]")
{
    linked_list ll;
    for (int i = 0; i < 100; i++)
        ll.push_front(i);
    REQUIRE(ll.length() == 100);
}

TEST_CASE("linked_list2", "[push_front, front, erase_front, push_back]")
{
    linked_list ll;
    ll.push_front(2); // 2
    ll.push_front(1); // 1->2
    ll.push_back(3);  // 1->2->3
    REQUIRE(ll.front()->data == 1);
    ll.erase_front(); // 2->3
    REQUIRE(ll.front()->data == 2);
    ll.erase_front(); // 3
    REQUIRE(ll.front()->data == 3);
}

TEST_CASE("linked_list3", "[bubble_sort]")
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    for (int x : a)
    {
        ll.push_front(x);
    }
    ll.bubble_sort();
    int sa[] = {11, 16, 22, 23, 70, 78, 90};
    for (int x : sa)
    {
        REQUIRE(ll.front()->data == x);
        ll.erase_front();
    }
}

TEST_CASE("linked_list4", "[copy constructor]")
{
    linked_list ll1;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    for (int x : a)
    {
        ll1.push_front(x);
    }
    linked_list ll2(ll1);
    int l = ll1.length();
    for (int i = 0; i < l; i++)
    {
        REQUIRE(ll1.front()->data == ll2.front()->data);
        ll1.erase_front();
        ll2.erase_front();
    }
}

TEST_CASE("linked_list5", "[delete_at_pos]")
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    for (int x : a)
    {
        ll.push_back(x);
    }
    ll.delete_at_position(2);
    int b[] = {70, 22, 78, 11, 90, 23};
    int l = ll.length();
    for (int i = 0; i < l; i++)
    {
        REQUIRE(ll.front()->data == b[i]);
        ll.erase_front();
    }
}

TEST_CASE("linked_list6", "[insert_at_pos]")
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    for (int x : a)
    {
        ll.push_back(x);
    }
    ll.insert_at_position(2, 42);
    int b[] = {70, 22, 42, 16, 78, 11, 90, 23};
    int l = ll.length();
    for (int i = 0; i < l; i++)
    {
        REQUIRE(ll.front()->data == b[i]);
        ll.erase_front();
    }
}

TEST_CASE("linked_list7", "[reverse]")
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    for (int x : a)
    {
        ll.push_front(x); // εισάγει στην αρχή άρα η λίστα θα είναι 23,90,11,78,16,22,70
    }
    ll.reverse();
    int b[] = {70, 22, 16, 78, 11, 90, 23};
    int l = ll.length();
    for (int i = 0; i < l; i++)
    {
        REQUIRE(ll.front()->data == b[i]);
        ll.erase_front();
    }
}

/*
===============================================================================
All tests passed (39 assertions in 7 test cases)
*/