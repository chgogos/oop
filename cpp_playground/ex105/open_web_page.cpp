// Opens a web page displaying 10 random numbers

#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <Windows.h> // windows only

using namespace std;

int main(){

    // random_device rd;
    // mt19937 gen(rd());

    default_random_engine gen;
    gen.seed(std::chrono::system_clock::now().time_since_epoch().count());

    uniform_real_distribution<> urd(0,1);

    std::string html_content= "<html><body><h1>C++</h1> <table border=1>";
    for(int i=0;i<10;i++){
        html_content.append("<tr><td>");
        html_content.append(to_string(i));
        html_content.append("</td><td>");
        double r=urd(gen);
        html_content.append(to_string(r));
        html_content.append("</td>");
        html_content.append("</tr>");
    }
    html_content.append("</table>");
    ofstream os;
    os.open("my_page.html");
    os << html_content;
    os.close();
    ShellExecute(NULL,"open","my_page.html",NULL,NULL,SW_SHOWNORMAL);
}
