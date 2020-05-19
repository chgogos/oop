#pragma once

#if defined(__linux__) || defined(__APPLE__)
#include "greek.hpp"
#elif defined(_WIN32) || defined(__WIN64__)
#include "greek_windows1253.hpp"
#else
#endif

#include <string>
#include <vector>
#include <ctime>
using namespace std;

// ############################################
// enum classes
// ############################################

enum class teaching_type
{
    THEORY,
    TUTORING,
    LABORATORY
};

enum class days
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

enum class academic_rank
{
    DEP,
    EDIP,
    EXTERNAL,
    TEACHING_ASSISTANT
};

// ############################################
// global functions
// ############################################

string get_teaching_type_as_string(teaching_type a_teaching_type);
string get_teaching_day_as_string(days day);
string time_as_string(time_t a_time);
string get_academic_rank_as_string(academic_rank an_acacdemic_rank);
string time_as_string(time_t a_time);
time_t string_as_time(string a_start_time);

class meeting; // forward declaration
bool is_overlap(meeting m1, meeting m2);

// ############################################
// class course
// ############################################

class course
{
private:
    string id;
    string title;
    int hours_theory;
    int hours_tutoring;
    int hours_lab;
    int workload;
    int credits;

public:
    course();
    course(string id, string t, int ht, int htu, int hl, int wl, int c);

    string get_id() const;
    string get_title() const;
    int get_hours_theory() const;
    int get_hours_tutoring() const;
    int get_hours_lab() const;
    int get_workload() const;
    int get_credits() const;

    friend ostream &operator<<(ostream &os, const course &a_course);
};

// ############################################
// class lecturer
// ############################################

class lecturer
{
private:
    string name;
    academic_rank rank;

public:
    lecturer();
    // lecturer(string n, academic_rank r);
    lecturer(string n, string r);

    string get_name() const;
    string get_rank() const;

    friend ostream &operator<<(ostream &os, const lecturer &a_lecturer);
};

// ############################################
// class classroom
// ############################################

class classroom
{
private:
    string id;
    int capacity;
    bool laboratory;

public:
    classroom();
    // classroom(string id, int c, bool lab);
    classroom(string id, int c, string is_lab);

    string get_id() const;
    int get_capacity() const;
    bool is_laboratory() const;
    friend ostream &operator<<(ostream &os, const classroom &a_classroom);
};

// ############################################
// class meeting
// ############################################

class meeting
{
private:
    course meeting_course;
    classroom meeting_classroom;
    vector<lecturer> lecturers;
    teaching_type type;
    days day;
    time_t start_time;
    int duration; // σε ώρες

public:
    meeting();
    meeting(string a_start_time_s, int duration);
    // meeting(course a_course, classroom a_classroom, teaching_type a_teaching_type, days a_day, string a_start_time, int a_duration);
    meeting(course a_course, classroom a_classroom, string a_teaching_type_s, string a_day_s, string a_start_time, int a_duration);
    void add_lecturer(lecturer a_lecturer);

    course get_meeting_course() const;
    classroom get_classroom() const;
    vector<lecturer> get_lecturers() const;
    string get_lecturers_as_string() const;
    teaching_type get_teaching_type() const;
    string teaching_type_as_string() const;
    days get_teaching_day_as_enum() const;
    string get_teaching_day() const;
    time_t get_start_time() const;
    void set_start_time_s(string a_time);
    void set_duration(int duration);
    time_t get_finish_time() const;
    int get_duration() const;

    operator std::string() const;
    friend ostream &operator<<(ostream &os, const meeting &a_meeting);
};

// ############################################
// class problem
// ############################################

class problem
{
private:
    vector<course> courses;
    vector<lecturer> lecturers;
    vector<classroom> classrooms;
    vector<meeting> meetings;

    bool is_overlap(int meeting1_idx, int meeting2_idx) const;

public:
    vector<course> get_courses();
    vector<lecturer> get_lecturers();
    vector<classroom> get_classrooms();
    vector<meeting> get_meetings();

    void add_course(course a_course);
    void add_lecturer(lecturer a_lecturer);
    void add_classroom(classroom a_classroom);
    void add_meeting(meeting a_meeting);

    course get_course(string course_id) const;
    classroom get_classroom(string classroom_id) const;
    lecturer get_lecturer(string lecturer_name) const;

    bool is_valid() const;
    void print_timetable_by_day();
    void print_timetable_by_course();
    void print_timetable_by_lecturer();
    void print_info();
};
