#include "db.hpp"
#include "model.hpp"

#if defined(_WIN32) || defined(__WIN64__)
#include <stringapiset.h>
const int SIZE = 1024;
#endif

using namespace std;

const char *convert_to_UTF8(string s)
{
#if defined(_WIN32) || defined(__WIN64__)

    char *text = new char[SIZE];
    WCHAR *w = new WCHAR[SIZE];
    strcpy(text, s.c_str());
    MultiByteToWideChar(CP_ACP, 0, text, -1, w, SIZE);        // ANSI to UNICODE
    WideCharToMultiByte(CP_UTF8, 0, w, -1, text, SIZE, 0, 0); // UNICODE to UTF-8
    return text;
#endif
    return s.c_str();
}

const char *convert_to_ANSI(string s)
{
#if defined(_WIN32) || defined(__WIN64__)
    char *text = new char[SIZE];
    WCHAR *w = new WCHAR[SIZE];
    strcpy(text, s.c_str());
    MultiByteToWideChar(CP_UTF8, 0, text, -1, w, SIZE);      // UTF-8 to UNICODE
    WideCharToMultiByte(CP_ACP, 0, w, -1, text, SIZE, 0, 0); // UNICODE to ANSI
    return text;
#endif
    return s.c_str();
}

void create_db()
{
    sqlite3 *connection = nullptr;
    char *errmsg = nullptr;
    int result = sqlite3_open("timetable.db", &connection);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        return;
    }
    const char *sql = "DROP TABLE IF EXISTS COURSES;"
                      "DROP TABLE IF EXISTS LECTURERS;"
                      "DROP TABLE IF EXISTS CLASSROOMS;"
                      "DROP TABLE IF EXISTS MEETINGS;"
                      "DROP TABLE IF EXISTS MEETINGS_LECTURERS;"
                      "CREATE TABLE COURSES(ID TEXT,TITLE TEXT, HOURS_THEORY INT, HOURS_TUTORING INT, HOURS_LABORATORY INT, WORKLOAD INT, CREDITS INT);"
                      "CREATE TABLE LECTURERS(NAME TEXT,RANK TEXT);"
                      "CREATE TABLE CLASSROOMS(ID TEXT,CAPACITY INT, IS_LABORATORY TEXT);"
                      "CREATE TABLE MEETINGS(ID INT, COURSE_ID TEXT,TYPE TEXT, DAY TEXT, START_TIME TEXT, DURATION INT, CLASSROOM_ID TEXT);"
                      "CREATE TABLE MEETINGS_LECTURERS(MEETING_ID INT, LECTURER_ID TEXT);";

    result = sqlite3_exec(connection, sql, 0, 0, &errmsg);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_free(errmsg);
        sqlite3_close(connection);
        return;
    }
    sqlite3_close(connection);
}

void write_to_db(problem a_problem)
{
    sqlite3 *connection = nullptr;
    char *errmsg = nullptr;
    int result = sqlite3_open("timetable.db", &connection);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        return;
    }

    // COURSES
    for (course a_course : a_problem.get_courses())
    {
        const char *sql = "INSERT INTO COURSES(ID, TITLE, HOURS_THEORY, HOURS_TUTORING, HOURS_LABORATORY, WORKLOAD, CREDITS) VALUES(?,?,?,?,?,?,?)";
        sqlite3_stmt *insert_stmt;
        result = sqlite3_prepare_v2(connection, sql, -1, &insert_stmt, nullptr);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        // sqlite3_bind_text(insert_stmt, 1, a_course.get_id().c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 1, convert_to_UTF8(a_course.get_id()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 2, convert_to_UTF8(a_course.get_title()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(insert_stmt, 3, a_course.get_hours_theory());
        sqlite3_bind_int(insert_stmt, 4, a_course.get_hours_tutoring());
        sqlite3_bind_int(insert_stmt, 5, a_course.get_hours_lab());
        sqlite3_bind_int(insert_stmt, 6, a_course.get_workload());
        sqlite3_bind_int(insert_stmt, 7, a_course.get_credits());
        int rv = sqlite3_step(insert_stmt);
        if (rv != SQLITE_DONE)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_reset(insert_stmt);
    }

    // LECTURERS
    for (lecturer a_lecturer : a_problem.get_lecturers())
    {
        const char *sql = "INSERT INTO LECTURERS(NAME, RANK) VALUES(?,?)";
        sqlite3_stmt *insert_stmt;
        result = sqlite3_prepare_v2(connection, sql, -1, &insert_stmt, nullptr);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_bind_text(insert_stmt, 1, convert_to_UTF8(a_lecturer.get_name()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 2, convert_to_UTF8(a_lecturer.get_rank()), -1, SQLITE_TRANSIENT);
        int rv = sqlite3_step(insert_stmt);
        if (rv != SQLITE_DONE)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_reset(insert_stmt);
    }

    // CLASSROOMS
    for (classroom a_classroom : a_problem.get_classrooms())
    {
        const char *sql = "INSERT INTO CLASSROOMS(ID, CAPACITY, IS_LABORATORY) VALUES(?,?,?)";
        sqlite3_stmt *insert_stmt;
        result = sqlite3_prepare_v2(connection, sql, -1, &insert_stmt, nullptr);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_bind_text(insert_stmt, 1, convert_to_UTF8(a_classroom.get_id()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(insert_stmt, 2, a_classroom.get_capacity());
        sqlite3_bind_text(insert_stmt, 3, convert_to_UTF8(a_classroom.is_laboratory() ? NAI_ : OXI_), -1, SQLITE_TRANSIENT);
        int rv = sqlite3_step(insert_stmt);
        if (rv != SQLITE_DONE)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_reset(insert_stmt);
    }

    // MEETINGS
    int meeting_id = 0;
    for (meeting a_meeting : a_problem.get_meetings())
    {
        const char *sql = "INSERT INTO MEETINGS(ID, COURSE_ID, TYPE, DAY, START_TIME, DURATION, CLASSROOM_ID) VALUES(?,?,?,?,?,?,?)";
        sqlite3_stmt *insert_stmt;
        result = sqlite3_prepare_v2(connection, sql, -1, &insert_stmt, nullptr);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_bind_int(insert_stmt, 1, meeting_id);
        sqlite3_bind_text(insert_stmt, 2, convert_to_UTF8(a_meeting.get_meeting_course().get_id()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 3, convert_to_UTF8(a_meeting.teaching_type_as_string().c_str()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 4, convert_to_UTF8(a_meeting.get_teaching_day()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(insert_stmt, 5, convert_to_UTF8(time_as_string(a_meeting.get_start_time()).c_str()), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(insert_stmt, 6, a_meeting.get_duration());
        sqlite3_bind_text(insert_stmt, 7, convert_to_UTF8(a_meeting.get_classroom().get_id()), -1, SQLITE_TRANSIENT);
        int rv = sqlite3_step(insert_stmt);
        if (rv != SQLITE_DONE)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_free(errmsg);
            sqlite3_close(connection);
            return;
        }
        sqlite3_reset(insert_stmt);

        for (lecturer a_lecturer : a_meeting.get_lecturers())
        {
            const char *sql = "INSERT INTO MEETINGS_LECTURERS(MEETING_ID, LECTURER_ID) VALUES(?,?)";
            sqlite3_stmt *insert_stmt;
            result = sqlite3_prepare_v2(connection, sql, -1, &insert_stmt, nullptr);
            if (result != SQLITE_OK)
            {
                cout << sqlite3_errmsg(connection);
                sqlite3_free(errmsg);
                sqlite3_close(connection);
                return;
            }
            sqlite3_bind_int(insert_stmt, 1, meeting_id);
            sqlite3_bind_text(insert_stmt, 2, convert_to_UTF8(a_lecturer.get_name()), -1, SQLITE_TRANSIENT);
            int rv = sqlite3_step(insert_stmt);
            if (rv != SQLITE_DONE)
            {
                cout << sqlite3_errmsg(connection);
                sqlite3_free(errmsg);
                sqlite3_close(connection);
                return;
            }
            sqlite3_reset(insert_stmt);
        }
        meeting_id++;
    }
    sqlite3_close(connection);
}

problem read_from_db()
{
    sqlite3 *connection = nullptr;
    int result = sqlite3_open("timetable.db", &connection);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        exit(-1);
    }

    problem a_problem;

    // courses
    const char *sql1 = "SELECT * FROM COURSES";
    sqlite3_stmt *query1 = nullptr;
    result = sqlite3_prepare_v2(connection, sql1, -1, &query1, nullptr);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        exit(-1);
    }
    while (SQLITE_ROW == sqlite3_step(query1))
    {
        string course_id = convert_to_ANSI((const char *)sqlite3_column_text(query1, 0));
        string course_title = convert_to_ANSI((const char *)sqlite3_column_text(query1, 1));
        int hours_theory = sqlite3_column_int(query1, 2);
        int hours_tutoring = sqlite3_column_int(query1, 3);
        int hours_lab = sqlite3_column_int(query1, 4);
        int workload = sqlite3_column_int(query1, 5);
        int credits = sqlite3_column_int(query1, 6);
        course a_course(course_id,course_title, hours_theory, hours_tutoring, hours_lab, workload, credits);
        a_problem.add_course(a_course);
    }

    // lecturers
    const char *sql2 = "SELECT * FROM LECTURERS";
    sqlite3_stmt *query2 = nullptr;
    result = sqlite3_prepare_v2(connection, sql2, -1, &query2, nullptr);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        exit(-1);
    }
    while (SQLITE_ROW == sqlite3_step(query2))
    {

        string name = convert_to_ANSI((const char *)sqlite3_column_text(query2, 0));
        string rank = convert_to_ANSI((const char *)sqlite3_column_text(query2, 1));
        lecturer a_lecturer(name, rank);
        a_problem.add_lecturer(a_lecturer);
    }

    // classrooms
    const char *sql3 = "SELECT * FROM CLASSROOMS";
    sqlite3_stmt *query3 = nullptr;
    result = sqlite3_prepare_v2(connection, sql3, -1, &query3, nullptr);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        exit(-1);
    }
    while (SQLITE_ROW == sqlite3_step(query3))
    {

        string classroom_id = convert_to_ANSI((const char *)sqlite3_column_text(query3, 0));
        int capacity = sqlite3_column_int(query3, 1);
        string is_laboratory = convert_to_ANSI((const char *)sqlite3_column_text(query3, 2));
        classroom a_classroom(classroom_id, capacity, is_laboratory);
        a_problem.add_classroom(a_classroom);
    }

    // meetings
    const char *sql4 = "SELECT * FROM MEETINGS";
    sqlite3_stmt *query4 = nullptr;
    result = sqlite3_prepare_v2(connection, sql4, -1, &query4, nullptr);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        exit(-1);
    }
    while (SQLITE_ROW == sqlite3_step(query4))
    {
        int meeting_id = sqlite3_column_int(query4, 0);
        string course_id = convert_to_ANSI((const char *)sqlite3_column_text(query4, 1));
        string type = convert_to_ANSI((const char *)sqlite3_column_text(query4, 2));
        string day_name = convert_to_ANSI((const char *)sqlite3_column_text(query4, 3));
        string start_time = convert_to_ANSI((const char *)sqlite3_column_text(query4, 4));
        int duration = sqlite3_column_int(query4, 5);
        string classroom_id = convert_to_ANSI((const char *)sqlite3_column_text(query4, 6));

        course a_course = a_problem.get_course(course_id);
        classroom a_classroom = a_problem.get_classroom(classroom_id);
        meeting a_meeting(a_course, a_classroom, type, day_name, start_time, duration);

        const char *sql5 = "SELECT * FROM MEETINGS_LECTURERS WHERE MEETING_ID=?";
        sqlite3_stmt *query5 = nullptr;
        result = sqlite3_prepare_v2(connection, sql5, -1, &query5, nullptr);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_close(connection);
            exit(-1);
        }
        sqlite3_bind_int(query5, 1, meeting_id);
        while (SQLITE_ROW == sqlite3_step(query5))
        {
            string lecturer_id = convert_to_ANSI((const char *)sqlite3_column_text(query5, 1));
            lecturer a_lecturer = a_problem.get_lecturer(lecturer_id);
            a_meeting.add_lecturer(a_lecturer);
        }
        a_problem.add_meeting(a_meeting);
    }

    sqlite3_close(connection);

    return a_problem;
}
