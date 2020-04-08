#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "date2020.hpp"

TEST_CASE("date2020_1", "test constructor (default) 1")
{
    date2020 d;
    REQUIRE(d.get_day_in_month() == 1);
    REQUIRE(d.get_month() == 1);
    REQUIRE(d.get_day_name() == "Wednesday");
}

TEST_CASE("date2020_2", "test constructor 2")
{
    date2020 d(15, 3);
    REQUIRE(d.get_day_in_month() == 15);
    REQUIRE(d.get_month() == 3);
    REQUIRE(d.get_day_name() == "Sunday");

    date2020 d2(32, 3);
    REQUIRE(d2.get_day_in_month() == -1);
    REQUIRE(d2.get_month() == -1);

    date2020 d3(1, 13);
    REQUIRE(d3.get_day_in_month() == -1);
    REQUIRE(d3.get_month() == -1);
}

TEST_CASE("date2020_3", "test constructor 3")
{
    date2020 d1(1);
    REQUIRE(d1.get_day_in_month() == 1);
    REQUIRE(d1.get_month() == 1);
    REQUIRE(d1.get_day_name() == "Wednesday");

    date2020 d2(100);
    REQUIRE(d2.get_day_in_month() == 9);
    REQUIRE(d2.get_month() == 4);
    REQUIRE(d2.get_day_name() == "Thursday");

    date2020 d3(1000);
    REQUIRE(d3.get_day_in_month() == -1);
    REQUIRE(d3.get_month() == -1);

    date2020 d4(-1);
    REQUIRE(d4.get_day_in_month() == -1);
    REQUIRE(d4.get_month() == -1);

}

TEST_CASE("date2020_4", "plus_days")
{
    date2020 d1;
    d1.plus_days(100);
    REQUIRE(d1.get_day_in_month() == 10);
    REQUIRE(d1.get_month() == 4);
    REQUIRE(d1.get_day_name() == "Friday");

    date2020 d2(1);
    d2.plus_days(365);
    REQUIRE(d2.get_day_in_month() == 31);
    REQUIRE(d2.get_month() == 12);
    REQUIRE(d2.get_day_name() == "Thursday");
}
