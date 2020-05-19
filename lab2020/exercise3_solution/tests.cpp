#include "../catch.hpp"
#include "model.hpp"
#include "util.hpp"

#if defined(__linux__) || defined(__APPLE__)
#define PROBLEM_FILE_NAME "academic_year_2019_2020_semester4.txt"
#elif defined(_WIN32) || defined(__WIN64__)
#define PROBLEM_FILE_NAME "academic_year_2019_2020_semester4_windows1253.txt"
#else
#endif

TEST_CASE("schedule", "[load], [is_valid]")
{
    problem current_instance = read_data(PROBLEM_FILE_NAME);
    REQUIRE(current_instance.get_courses().size() == 6);
    REQUIRE(current_instance.get_lecturers().size() == 10);
    REQUIRE(current_instance.get_classrooms().size() == 8);
    REQUIRE(current_instance.get_meetings().size() == 38);


    course a_course = current_instance.get_course("406"); // 406;ΑΝΤΙΚΕΙΜΕΝΟΣΤΡΑΦΗΣ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΣ;2;2;2;10;6
    REQUIRE(a_course.get_hours_theory() == 2);
    REQUIRE(a_course.get_hours_tutoring() == 2);
    REQUIRE(a_course.get_hours_lab() == 2);

    lecturer a_lecturer = current_instance.get_lecturers()[0]; //  ΑΝΤΩΝΙΑΔΗΣ;ΔΕΠ 
    REQUIRE(a_lecturer.get_rank() == DEP_);

    classroom a_classroom = current_instance.get_classrooms()[0]; // ΑΜΦΑ;150;ΟΧΙ
    REQUIRE(a_classroom.get_capacity()==150);
    REQUIRE(a_classroom.is_laboratory()==false);

    meeting a_meeting = current_instance.get_meetings()[0]; // 404;ΘΕΩΡΙΑ;ΔΕΥΤΕΡΑ;8:00;2;ΑΜΦΓ;ΣΤΥΛΙΟΣ
    REQUIRE(time_as_string(a_meeting.get_start_time()) == "08:00");
    REQUIRE(time_as_string(a_meeting.get_finish_time()) == "10:00");

    REQUIRE(current_instance.is_valid());
}

TEST_CASE("coflict", "[is_overlap]")
{
    meeting m1("10:00", 2); // 10:00-12:00
    meeting m2("11:00", 1); // 11:00-12:00
    REQUIRE(is_overlap(m1, m2));
    REQUIRE(is_overlap(m2, m1));
    meeting m3("12:00", 3); // 12:00-15:00
    REQUIRE(is_overlap(m1, m3) == false);
    REQUIRE(is_overlap(m3, m1) == false);
}

TEST_CASE("time", "[string_as_time] [time_as_string]")
{
    time_t t1 = string_as_time("10:00");
    time_t t2 = string_as_time("12:00");
    REQUIRE(t2 - t1 == 7200);

    t1 += 75 * 60; // 75 λεπτά μετά τις 10:00 η ώρα θα πρέπει να είναι 11:15
    REQUIRE(time_as_string(t1) == "11:15");
}
