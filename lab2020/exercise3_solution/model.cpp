#include "model.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>

// ############################################
// global functions
// ############################################

string get_teaching_day_as_string(days day)
{
    switch (day)
    {
    case days::MONDAY:
        return MONDAY_;
    case days::TUESDAY:
        return TUESDAY_;
    case days::WEDNESDAY:
        return WEDNESDAY_;
    case days::THURSDAY:
        return THURSDAY_;
    case days::FRIDAY:
        return FRIDAY_;
    default:
        cerr << "ERROR: NONEXISTENT enum class days";
        return "ERROR";
    };
}

string get_teaching_type_as_string(teaching_type a_teaching_type)
{

    switch (a_teaching_type)
    {
    case teaching_type::THEORY:
        return THEORY_;
    case teaching_type::TUTORING:
        return TUTORING_;
    case teaching_type::LABORATORY:
        return LABORATORY_;
    default:
        cerr << "ERROR: NONEXISTENT enum class teaching_type";
        return "ERROR";
    };
}

string get_academic_rank_as_string(academic_rank an_acacdemic_rank)
{
    switch (an_acacdemic_rank)
    {
    case academic_rank::DEP:
        return DEP_;
    case academic_rank::EDIP:
        return EDIP_;
    case academic_rank::EXTERNAL:
        return EXTERNAL_;
    case academic_rank::TEACHING_ASSISTANT:
        return TEACHING_ASSISTANT_;
    default:
        cerr << "ERROR: NONEXISTENT academic rank";
        return "ERROR";
    }
}

string time_as_string(time_t a_time)
{
    stringstream ss;
    ss << put_time(localtime(&a_time), "%H:%M");
    return ss.str();
}

time_t string_as_time(string a_start_time)
{
    struct tm tm;
    int hour, minute;
    sscanf(a_start_time.c_str(), "%d:%d", &hour, &minute);
    tm.tm_year = 2020 - 1900;
    tm.tm_mon = 1 - 1;
    tm.tm_mday = 1;
    tm.tm_hour = hour;
    tm.tm_min = minute;
    tm.tm_sec = 0;
    tm.tm_isdst = -1;
    time_t t = mktime(&tm);
    return t;
}

bool is_overlap(int m1_time_start, int m1_time_finish, int m2_time_start, int m2_time_finish)
{
    if (m1_time_start > m2_time_start)
    {
        swap(m1_time_start, m2_time_start);
        swap(m1_time_finish, m2_time_finish);
    }
    return (m1_time_finish > m2_time_start);
}

bool is_overlap(meeting m1, meeting m2)
{
    return is_overlap(m1.get_start_time(), m1.get_finish_time(), m2.get_start_time(), m2.get_finish_time());
}

// ############################################
// class course
// ############################################

course::course() : id("000"), title("UNKNOWN"), hours_theory(0), hours_tutoring(0), hours_lab(0), workload(0), credits(0) {}

course::course(string id, string t, int ht, int htu, int hl, int wl, int c) : id(id), title(t), hours_theory(ht), hours_tutoring(htu), hours_lab(hl), workload(wl), credits(c) {}

string course::get_id() const
{
    return id;
}

string course::get_title() const
{
    return title;
}

int course::get_hours_theory() const
{
    return hours_theory;
}

int course::get_hours_tutoring() const
{
    return hours_tutoring;
}

int course::get_hours_lab() const
{
    return hours_lab;
}

int course::get_workload() const
{
    return workload;
}

int course::get_credits() const
{
    return credits;
}

ostream &operator<<(ostream &os, const course &a_course)
{
    os << a_course.id << " "
       << a_course.title << " "
       << THEORY_ << ":" << a_course.hours_theory << " "
       << TUTORING_ << ":" << a_course.hours_tutoring << " "
       << LABORATORY_ << ":" << a_course.hours_lab << " "
       << WORKLOAD_ << ":" << a_course.workload << " "
       << CREDITS_ << ":" << a_course.credits;
    return os;
}

// ############################################
// class lecturer
// ############################################

lecturer::lecturer() : name("UNKNOWN"), rank(academic_rank::DEP) {}

// lecturer::lecturer(string n, academic_rank r) : name(n), rank(r) {}

lecturer::lecturer(string n, string lecturer_type) : name(n)
{
    if (lecturer_type == DEP_)
        rank = academic_rank::DEP;
    else if (lecturer_type == EDIP_)
        rank = academic_rank::EDIP;
    else if (lecturer_type == EXTERNAL_)
        rank = academic_rank::EXTERNAL;
    else if (lecturer_type == TEACHING_ASSISTANT_)
        rank = academic_rank::TEACHING_ASSISTANT;
    else
    {
        cout << "Unexpected input " << lecturer_type << endl;
        exit(-1);
    }
}

string lecturer::get_name() const
{
    return name;
}

string lecturer::get_rank() const
{
    return get_academic_rank_as_string(rank);
}

ostream &operator<<(ostream &os, const lecturer &a_lecturer)
{
    os << a_lecturer.name << " "
       << a_lecturer.get_rank();
    return os;
}

// ############################################
// class classroom
// ############################################

classroom::classroom() : id("UKKNOWN"), capacity(0), laboratory(false) {}
// classroom::classroom(string id, int c, bool lab) : id(id), capacity(c), laboratory(lab) {}
classroom::classroom(string id, int c, string is_lab) : id(id), capacity(c)
{
    if (is_lab == NAI_)
        laboratory = true;
    else
        laboratory = false;
}

string classroom::get_id() const
{
    return id;
}

int classroom::get_capacity() const
{
    return capacity;
}

bool classroom::is_laboratory() const
{
    return laboratory;
}

ostream &operator<<(ostream &os, const classroom &a_classroom)
{
    os << a_classroom.id << " "
       << a_classroom.capacity << " "
       << (a_classroom.laboratory ? LABORATORY_ : "");
    return os;
}

// ############################################
// class meeting
// ############################################

meeting::meeting() : meeting_course(course()), meeting_classroom(classroom()), type(teaching_type::THEORY), day(days::MONDAY), start_time(string_as_time("10:00")), duration(2) {}

meeting::meeting(string a_start_time_s, int duration) : meeting()
{
    start_time = string_as_time(a_start_time_s);
    this->duration = duration;
}

// meeting::meeting(course a_course, classroom a_classroom, teaching_type a_teaching_type, days a_day, string a_start_time, int a_duration)
//     : meeting_course(a_course), meeting_classroom(a_classroom), type(a_teaching_type), day(a_day), duration(a_duration)
// {
//     start_time = string_as_time(a_start_time);
// }

meeting::meeting(course a_course, classroom a_classroom, string a_teaching_type_s, string a_day_s, string a_start_time, int a_duration)
    : meeting_course(a_course), meeting_classroom(a_classroom), duration(a_duration)
{
    if (a_teaching_type_s == THEORY_)
        type = teaching_type::THEORY;
    else if (a_teaching_type_s == LABORATORY_)
        type = teaching_type::LABORATORY;
    else if (a_teaching_type_s == TUTORING_)
        type = teaching_type::TUTORING;
    else
    {
        cerr << "Unexpected input " << a_teaching_type_s << endl;
        exit(-1);
    }

    if (a_day_s == MONDAY_)
    {
        day = days::MONDAY;
    }
    else if (a_day_s == TUESDAY_)
    {
        day = days::TUESDAY;
    }
    else if (a_day_s == WEDNESDAY_)
    {
        day = days::WEDNESDAY;
    }
    else if (a_day_s == THURSDAY_)
    {
        day = days::THURSDAY;
    }
    else if (a_day_s == FRIDAY_)
    {
        day = days::FRIDAY;
    }
    else
    {
        cerr << "Unexpected input " << a_day_s << endl;
        exit(-1);
    }

    start_time = string_as_time(a_start_time);
}

void meeting::add_lecturer(lecturer a_lecturer)
{
    lecturers.push_back(a_lecturer);
}

course meeting::get_meeting_course() const
{
    return meeting_course;
}

teaching_type meeting::get_teaching_type() const
{
    return type;
}

string meeting::teaching_type_as_string() const
{
    return get_teaching_type_as_string(type);
}

days meeting::get_teaching_day_as_enum() const
{
    return day;
}

string meeting::get_teaching_day() const
{
    return get_teaching_day_as_string(day);
}

vector<lecturer> meeting::get_lecturers() const
{
    return lecturers;
}

string meeting::get_lecturers_as_string() const
{
    stringstream ss;
    for (auto lecturer : lecturers)
    {
        ss << lecturer.get_name() << " ";
    }
    return ss.str();
}

classroom meeting::get_classroom() const
{
    return meeting_classroom;
}

time_t meeting::get_start_time() const
{
    return start_time;
}

time_t meeting::get_finish_time() const
{
    return start_time + duration * 3600;
}

int meeting::get_duration() const
{
    return duration;
}

void meeting::set_start_time_s(string a_time_s)
{
    start_time = string_as_time(a_time_s);
}

void meeting::set_duration(int duration)
{
    this->duration = duration;
}

ostream &operator<<(ostream &os, const meeting &a_meeting)
{

    os << a_meeting.meeting_course.get_title() << " "
       << a_meeting.meeting_classroom.get_id() << " "
       << a_meeting.teaching_type_as_string() << " "
       << a_meeting.get_teaching_day() << " "
       << time_as_string(a_meeting.start_time) << " "
       << time_as_string(a_meeting.get_finish_time()) << " "
       << a_meeting.duration << " [";
    for (lecturer a_lecturer : a_meeting.get_lecturers())
    {
        os << a_lecturer.get_name() << ", ";
    }
    os << "\b\b]";
    return os;
}

// ############################################
// class problem
// ############################################

vector<course> problem::get_courses()
{
    return courses;
}

vector<lecturer> problem::get_lecturers()
{
    return lecturers;
}

vector<classroom> problem::get_classrooms()
{
    return classrooms;
}

vector<meeting> problem::get_meetings()
{
    return meetings;
}

void problem::add_course(course a_course)
{
    courses.push_back(a_course);
}

void problem::add_lecturer(lecturer a_lecturer)
{
    lecturers.push_back(a_lecturer);
}

void problem::add_classroom(classroom a_classroom)
{
    classrooms.push_back(a_classroom);
}

void problem::add_meeting(meeting a_meeting)
{
    meetings.push_back(a_meeting);
}

course problem::get_course(string course_id) const
{
    for (course a_course : courses)
    {
        if (a_course.get_id() == course_id)
            return a_course;
    }
    throw "error: course not found";
}

classroom problem::get_classroom(string classroom_id) const
{
    for (classroom a_classroom : classrooms)
    {
        if (a_classroom.get_id() == classroom_id)
            return a_classroom;
    }
    throw "error: classroom not found";
}

lecturer problem::get_lecturer(string lecturer_name) const
{
    for (lecturer a_lecturer : lecturers)
    {
        if (a_lecturer.get_name() == lecturer_name)
            return a_lecturer;
    }
    throw "error: lecturer not found";
}

bool problem::is_overlap(int meeting1_idx, int meeting2_idx) const
{
    if (::is_overlap(meetings[meeting1_idx], meetings[meeting2_idx]))
    {
        cout << meetings[meeting1_idx] << " conflict " << meetings[meeting2_idx] << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool problem::is_valid() const
{
    stringstream ss;
    bool valid = true;
    for (course a_course : courses)
    {
        // έλεγχος ότι ο αριθμός ωρών διδασκαλίας κάθε μαθήματος στο πρόγραμμα σπουδών είναι συμβατός με τις
        // ώρες διδασκαλίας στο ωρολόγιο πρόγραμμα
        int total_hours_theory = 0;
        int total_hours_tutoring = 0;
        int total_hours_lab = 0;
        for (meeting a_meeting : meetings)
        {
            if (a_meeting.get_meeting_course().get_id() == a_course.get_id())
            {
                if (a_meeting.get_teaching_type() == teaching_type::THEORY)
                    total_hours_theory += a_meeting.get_duration();
                else if (a_meeting.get_teaching_type() == teaching_type::TUTORING)
                    total_hours_tutoring += a_meeting.get_duration();
                else if (a_meeting.get_teaching_type() == teaching_type::LABORATORY)
                {
                    total_hours_lab += a_meeting.get_duration();
                    if (a_course.get_hours_lab() != a_meeting.get_duration())
                    {
                        ss << "CHECK1. COURSE: " << a_course.get_id() << " " << a_course.get_hours_lab()
                           << " " << a_meeting.get_duration() << " LABORATORY ERROR\n";
                        valid = false;
                    }
                }
            }
        }
        if (total_hours_theory == a_course.get_hours_theory())
        {
            // cout << "CHECK1. COURSE: " << a_course.get_id() << " THEORY OK\n";
        }
        else
        {
            ss << "CHECK1. COURSE: " << a_course.get_id() << " " << a_course.get_hours_theory()
               << " " << total_hours_theory << " THEORY ERROR\n";
            valid = false;
        }
        if (total_hours_tutoring == a_course.get_hours_tutoring())
        {
            // cout << "CHECK1. COURSE: " << a_course.get_id() << " TUTORING OK\n";
        }
        else
        {
            ss << "CHECK1. COURSE: " << a_course.get_id() << " " << a_course.get_hours_tutoring()
               << " " << total_hours_tutoring << " TUTORING ERROR\n";
            valid = false;
        }
        if (total_hours_lab >= a_course.get_hours_lab())
        {
            // cout << "CHECK1. COURSE: " << a_course.get_id() << " LABS=" << total_hours_lab / a_course.get_hours_lab() << " LABORATORY OK\n";
        }
        else
        {
            ss << "CHECK1. COURSE: " << a_course.get_id() << " " << a_course.get_hours_lab()
               << " " << total_hours_lab << " LABORATORY ERROR\n";
            valid = false;
        }
    }

    // έλεγχος ότι δεν υπάρχουν επικαλύψεις ωρών στο πρόγραμμα (>1 μαθήματα στην ίδια ημέρα και ώρα στην ίδια αίθουσα)
    for (size_t i = 0; i < meetings.size(); i++)
    {
        for (size_t j = i + 1; j < meetings.size(); j++)
        {
            if (meetings[i].get_teaching_day() == meetings[j].get_teaching_day() &&
                meetings[i].get_classroom().get_id() == meetings[j].get_classroom().get_id())
            {
                if (is_overlap(i, j))
                {
                    ss << "CHECK2. CLASSROOM OVELAP " << meetings[i] << " vs " << meetings[j] << endl;
                    valid = false;
                }
            }
        }
    }

    // έλεγχος ότι ένας καθηγητής δεν διδάσκει 2 μαθήματα ταυτόχρονα
    for (size_t i = 0; i < meetings.size(); i++)
    {
        vector<string> m1_lecturers;
        for (auto x : meetings[i].get_lecturers())
        {
            m1_lecturers.push_back(x.get_name());
        }
        sort(begin(m1_lecturers), end(m1_lecturers));
        for (size_t j = i + 1; j < meetings.size(); j++)
        {
            if (meetings[i].get_teaching_day() != meetings[j].get_teaching_day())
                continue;
            vector<string> m2_lecturers;
            for (auto x : meetings[j].get_lecturers())
            {
                m2_lecturers.push_back(x.get_name());
            }
            sort(begin(m2_lecturers), end(m2_lecturers));
            vector<string> v(5);
            auto it = std::set_intersection(begin(m1_lecturers), end(m1_lecturers), begin(m2_lecturers), end(m2_lecturers), v.begin());
            v.resize(it - v.begin());
            if (v.size() == 0)
                continue;
            if (is_overlap(i, j))
            {
                ss << "CHECK3. LECTURER OVELAP " << meetings[i] << " " << meetings[j] << endl;
                valid = false;
            }
        }
    }
    if (valid)
    {
        ss << "CHECK 1: CONSISTENT COURSE HOURS AND TEACHING HOURS" << endl;
        ss << "CHECK 2: NO CLASSROOM OVERLAPS" << endl;
        ss << "CHECK 3: NO LECTURER OVELAPS" << endl;
    }
    cout << ss.str();
    return valid;
}

void problem::print_timetable_by_day()
{
    vector<days> week_days = {days::MONDAY, days::TUESDAY, days::WEDNESDAY, days::THURSDAY, days::FRIDAY};
    sort(begin(meetings), end(meetings), [](meeting a, meeting b) { return a.get_start_time() < b.get_start_time(); });
    for (days a_day : week_days)
    {
        string day_as_string = get_teaching_day_as_string(a_day);
        cout << "\n"
             << day_as_string << endl;
        for (meeting a_meeting : meetings)
        {
            if (a_meeting.get_teaching_day_as_enum() == a_day)
            {
                course a_course = a_meeting.get_meeting_course();
                cout << time_as_string(a_meeting.get_start_time()) << "-" << time_as_string(a_meeting.get_finish_time()) << " ";
                cout << a_course.get_id() << " " << a_course.get_title() << "(" << a_meeting.teaching_type_as_string() << ") ";
                cout << a_meeting.get_classroom().get_id() << " ";
                cout << a_meeting.get_lecturers_as_string() << endl;
            }
        }
    }
}

void problem::print_timetable_by_course()
{
    sort(begin(courses), end(courses), [](const course &a, const course &b) { return a.get_id() < b.get_id(); });
    for (course a_course : courses)
    {
        cout << "\n"
             << a_course.get_id() << " " << a_course.get_title() << endl;
        vector<meeting> course_meetings;
        for (meeting &a_meeting : meetings)
        {
            if (a_meeting.get_meeting_course().get_id() == a_course.get_id())
                course_meetings.push_back(a_meeting);
        }
        sort(begin(course_meetings), end(course_meetings), [](meeting a, meeting b) { return a.get_teaching_day_as_enum() < b.get_teaching_day_as_enum(); });

        for (meeting &a_meeting : course_meetings)
        {
            cout << a_meeting.get_teaching_day() << " ";
            cout << time_as_string(a_meeting.get_start_time()) << "-" << time_as_string(a_meeting.get_finish_time()) << " ";
            cout << a_meeting.teaching_type_as_string() << " ";
            cout << a_meeting.get_classroom().get_id() << " ";
            cout << a_meeting.get_lecturers_as_string() << endl;
        }
    }
}

void problem::print_timetable_by_lecturer()
{
    sort(begin(lecturers), end(lecturers), [](const lecturer &a, const lecturer &b) { return a.get_name() < b.get_name(); });
    for (lecturer &a_lecturer : lecturers)
    {
        vector<meeting> lecturer_meetings;
        for (meeting &a_meeting : meetings)
        {
            auto ml = a_meeting.get_lecturers();
            auto it = find_if(begin(ml),
                              end(ml),
                              [&a_lecturer](const lecturer &x) { return x.get_name() == a_lecturer.get_name(); });
            if (it != end(ml))
                lecturer_meetings.push_back(a_meeting);
        }
        if (lecturer_meetings.empty())
            continue;
        cout << "\n"
             << a_lecturer.get_name() << endl;
        sort(begin(lecturer_meetings), end(lecturer_meetings),
             [](meeting a, meeting b) {
                 if (a.get_teaching_day_as_enum() == b.get_teaching_day_as_enum())
                 {
                     return a.get_start_time() < b.get_start_time();
                 }
                 else
                     return a.get_teaching_day_as_enum() < b.get_teaching_day_as_enum();
             });

        for (meeting &a_meeting : lecturer_meetings)
        {
            course a_course = a_meeting.get_meeting_course();
            cout << a_meeting.get_teaching_day() << " ";
            cout << time_as_string(a_meeting.get_start_time()) << "-" << time_as_string(a_meeting.get_finish_time()) << " ";
            cout << a_course.get_id() << " " << a_course.get_title() << "(" << a_meeting.teaching_type_as_string() << ") ";
            cout << a_meeting.get_classroom().get_id() << endl;
        }
    }
}

void problem::print_info()
{
    sort(begin(courses), end(courses), [](course c1, course c2) { return c1.get_id() < c2.get_id(); });
    for (course a_course : courses)
    {
        cout << a_course << endl;
    }
    cout << "#########################" << endl;

    sort(begin(lecturers), end(lecturers), [](lecturer &l1, lecturer &l2) { return l1.get_name() < l2.get_name(); });
    for (lecturer a_lecturer : lecturers)
    {
        cout << a_lecturer << endl;
    }
    cout << "#########################" << endl;

    sort(begin(classrooms), end(classrooms), [](classroom &c1, classroom &c2) { return c1.get_id() < c2.get_id(); });
    for (classroom a_classroom : classrooms)
    {
        cout << a_classroom << endl;
    }
    cout << "#########################" << endl;

    sort(begin(meetings), end(meetings), [](meeting &m1, meeting &m2) {
        if (m1.get_teaching_day_as_enum() == m2.get_teaching_day_as_enum())
            return m1.get_start_time() < m2.get_start_time();
        else
            return m1.get_teaching_day_as_enum() < m2.get_teaching_day_as_enum();
    });
    for (meeting a_meeting : meetings)
    {
        cout << a_meeting << endl;
    }
}