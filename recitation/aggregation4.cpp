#include <iostream>
#include <vector>

using namespace std;

class consultation
{
private:
    string date_time;
    string physician;
    string diagnosis;
    bool is_emergency;

public:
    consultation(string date_time, string physician) : date_time(date_time), physician(physician), is_emergency(false) {}
    void set_diagnosis(string text)
    {
        diagnosis = text;
    }
    void set_emergency(bool f)
    {
        is_emergency = f;
    }
    friend ostream& operator<<(ostream& os, const consultation& cons){
        os << "Date & Time:" << cons.date_time; 
        os << " Physician: " << cons.physician; 
        os << " Emergency: " << (cons.is_emergency?"TRUE":"FALSE") << endl;
        os << "Diagnosis: " << cons.diagnosis;
        return os;
    } 
};

class patient
{
private:
    string amka;
    string name;
    vector<consultation *> consultations;
public:
    patient(string amka, string name) : amka(amka), name(name) {}
    void add_consultation(consultation *cons)
    {
        consultations.push_back(cons);
    }
    void log(){
        cout << "Name:" << name << " AMKA:" << amka << endl;
        for(auto cons: consultations){
            cout << *cons << endl;
        }
    }
};

int main()
{
    patient a_patient("196004010001", "Pappas Kostas");
    
    consultation *cons1 = new consultation("15/1/2021 10:00", "Samaras - pathologist");
    cons1->set_diagnosis("anxiety, fatigue, ...");
    a_patient.add_consultation(cons1);
    
    consultation *cons2 = new consultation("20/1/2021 12:00", "Nikolaou - cardiologist");
    cons2->set_diagnosis("chest pain...");
    cons2->set_emergency(true);
    a_patient.add_consultation(cons2);
    
    a_patient.log();
}

/*
Name:Pappas Kostas AMKA:196004010001
Date & Time:15/1/2021 10:00 Physician: Samaras - pathologist Emergency: FALSE
Diagnosis: anxiety, fatigue, ...
Date & Time:20/1/2021 12:00 Physician: Nikolaou - cardiologist Emergency: TRUE
Diagnosis: chest pain...
*/