#if defined(__linux__) || defined(__APPLE__)
#define PROBLEM_FILE_NAME "academic_year_2019_2020_semester4.txt"
// #define PROBLEM_FILE_NAME "academic_year_2019_2020_semester4_invalid.txt"
#elif defined(_WIN32) || defined(__WIN64__)
#define PROBLEM_FILE_NAME "academic_year_2019_2020_semester4_windows1253.txt"
#else
#endif

#include "util.hpp"
#include "model.hpp"
#include "db.hpp"
#include <iostream>
#include <climits>

using namespace std;

void pause()
{
    printf("Press any key to continue . . .");
    getchar();
}

int main()
{
#if defined(__linux__)
    cout << "LINUX" << endl;
#elif defined(__APPLE__)
    cout << "MACOS" << endl;
#elif defined(_WIN32) || defined(__WIN64__)
    cout << "WINDOWS" << endl;
    setlocale(LC_ALL, "greek");
#elif
    cout << "UNKNOWN" << endl;
#endif

    bool is_timetable_loaded = false;
    problem current_instance;
    int choice = 0;
    while (choice != 8)
    {
        cout << (is_timetable_loaded ? "TIMETABLE IS LOADED" : "TIMETABLE IS NOT LOADED") << endl;
        cout << "1. Load data from text file" << endl;
        cout << "2. Check validity of timetable" << endl;
        cout << "3. Print timetable by day" << endl;
        cout << "4. Print timetable by course" << endl;
        cout << "5. Print timetable by lecturer" << endl;
        cout << "6. Write data to SQLiteDB" << endl;
        cout << "7. Read data from SQLiteDB" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers.\n";
            cout << "Enter choice: ";
            cin >> choice;
        }
        switch (choice)
        {
        case 1:
            current_instance = read_data(PROBLEM_FILE_NAME);
            is_timetable_loaded = true;
            current_instance.print_info();
            break;
        case 2:
            if (!is_timetable_loaded)
            {
                cout << "No data" << endl;
                break;
            }
            is_timetable_loaded = current_instance.is_valid();
            break;
        case 3:
            if (!is_timetable_loaded)
            {
                cout << "No data" << endl;
                break;
            }
            current_instance.print_timetable_by_day();
            break;
        case 4:
            if (!is_timetable_loaded)
            {
                cout << "No data" << endl;
                break;
            }
            current_instance.print_timetable_by_course();
            break;
        case 5:
            if (!is_timetable_loaded)
            {
                cout << "No data" << endl;
                break;
            }
            current_instance.print_timetable_by_lecturer();
            break;
        case 6:
            create_db();
            write_to_db(current_instance);
            break;
        case 7:
            current_instance = read_from_db();
            is_timetable_loaded = true;
            current_instance.print_info();
            break;
        case 8:
            break;
        default:
            cout << "Invalid choice - try again" << endl;
        }
        cout << "####################################" << endl;
        // if (choice != 8 && choice != 9)
        // {
        //     pause();
        //     cout << "\033[2J\033[1;1H";
        // }
    }
}
