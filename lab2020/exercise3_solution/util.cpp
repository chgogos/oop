#include "util.hpp"
#include <fstream>
#include <iostream>

using namespace std;

problem read_data(string fn)
{
    problem current_problem;
    ifstream ifs;
    string line;
    string status = "none";
    ifs.open(fn, ios::in);
    while (getline(ifs, line))
    {
        if (line.at(0) == '#')
            continue;

        if (line.substr(0, string("[COURSE]").size()) == "[COURSE]")
        {
            status = "course";
            continue;
        }
        else if (line.substr(0, string("[LECTURERS]").size()) == "[LECTURERS]")
        {
            status = "lecturers";
            continue;
        }
        else if (line.substr(0, string("[CLASSROOMS]").size()) == "[CLASSROOMS]")
        {
            status = "classrooms";
            continue;
        }
        else if (line.substr(0, string("[MEETINGS]").size()) == "[MEETINGS]")
        {
            status = "meetings";
            continue;
        }
        if (status == "course")
        {
            string course_id = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);
            string course_title = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);
            int hours_theory = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            int hours_tutoring = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            int hours_laboratory = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            int work_load = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            int credits = stoi(line.substr(0, line.find(";")));
            course a_course(course_id, course_title, hours_theory, hours_tutoring, hours_laboratory, work_load, credits);
            // cout << a_course << endl;
            current_problem.add_course(a_course);
        }
        else if (status == "lecturers")
        {
            string lecturer_name = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);
            string lecturer_type = line.substr(0, line.find(";"));
            lecturer a_lecturer(lecturer_name, lecturer_type);
            // cout << a_lecturer << endl;
            current_problem.add_lecturer(a_lecturer);
        }
        else if (status == "classrooms")
        {
            string classroom_id = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);
            int classroom_capacity = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            string is_laboratory_s = line.substr(0, line.find(";"));
            classroom a_classroom(classroom_id, classroom_capacity, is_laboratory_s);
            // cout << a_classroom << endl;
            current_problem.add_classroom(a_classroom);
        }
        else if (status == "meetings")
        {
            string course_id = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);

            string course_type = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);

            string day = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);

            string start_time = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);

            int duration_in_hours = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);

            string classroom_id = line.substr(0, line.find(";"));
            line.erase(0, line.find(";") + 1);

            string lecturers_string = line.substr(0, line.find(";"));
            vector<string> lecturer_names;
            size_t pos = 0;
            string a_lecturer;
            while ((pos = lecturers_string.find(",")) != string::npos)
            {
                a_lecturer = lecturers_string.substr(0, line.find(","));
                lecturer_names.push_back(a_lecturer);
                lecturers_string.erase(0, lecturers_string.find(",") + 1);
            }
            lecturer_names.push_back(lecturers_string);
            course a_course = current_problem.get_course(course_id);
            classroom a_classroom = current_problem.get_classroom(classroom_id);
            meeting a_meeting(a_course, a_classroom, course_type, day, start_time, duration_in_hours);
            for (string name : lecturer_names)
            {
                lecturer a_lecturer = current_problem.get_lecturer(name);
                a_meeting.add_lecturer(a_lecturer);
            }
            current_problem.add_meeting(a_meeting);
            // cout << a_meeting << endl;
        }
    }

    return current_problem;
}