#include <iostream>
#include <vector>

using namespace std;

class doctor
{
protected:
    string name;
    string phone;
    string specialty;

public:
    doctor(string n, string p, string s) : name(n), phone(p), specialty(s) {}
    void catalogue(vector<doctor *> &cat)
    {
        cat.push_back(this);
        cout << "Doctor " << name << " inserted in the catalogue" << endl;
    }
    void uncatalogue(vector<doctor *> &cat)
    {
        for (auto it = cat.begin(); it != cat.end(); it++)
        {
            doctor *doc = *it;
            if (doc->name == name && doc->phone == phone && doc->specialty == specialty)
            {
                cat.erase(it);
                cout << "Doctor " << name << " removed from the catalogue" << endl;
                return;
            }
        }
        cout << "Doctor " << name << " is not in the catalogue" << endl;
    }

    virtual void info() = 0;
};

class hospital_doctor : public doctor
{
private:
    string hospital;
    string staff_id;

public:
    hospital_doctor(string n, string p, string s, string h, string st) : doctor(n, p, s), hospital(h), staff_id(st) {}
    virtual void info()
    {
        cout << "HOSPITAL DOCTOR: " << name << " " << phone << " " << specialty << " " << hospital << " " << staff_id << endl;
    }
};

class private_practitioner : public doctor
{
private:
    string address;

public:
    private_practitioner(string n, string p, string s, string a) : doctor(n, p, s), address(a) {}
    virtual void info()
    {
        cout << "PRIVATE PRACTITIONER: " << name << " " << phone << " " << specialty << " " << address << endl;
    }
};

int main()
{
    cout << "#########################" << endl;
    vector<doctor *> catalog;
    doctor *d1 = new hospital_doctor("Ioannou", "697123456", "cardiologist", "Hadjikosta", "12345");
    doctor *d2 = new hospital_doctor("Pappas", "697234567", "surgeon", "GH Arta", "12346");
    doctor *d3 = new private_practitioner("Zikos", "697777777", "pathologist", "Asklipiou 12");
    doctor *d4 = new private_practitioner("Kamenos", "697888888", "cardiologist", "Sikelianou 4");

    d1->catalogue(catalog);
    d2->catalogue(catalog);
    d3->catalogue(catalog);
    d4->catalogue(catalog);

    cout << "#########################" << endl;
    for (auto doc : catalog)
    {
        doc->info();
    }
    cout << "#########################" << endl;
    d2->uncatalogue(catalog);
    cout << "#########################" << endl;
    for (auto doc : catalog)
    {
        doc->info();
    }
    cout << "#########################" << endl;
    d2->uncatalogue(catalog);
    cout << "#########################" << endl;
    delete d1;
    delete d2;
    delete d3;
    delete d4;
}

/*
#########################
Doctor Ioannou inserted in the catalogue
Doctor Pappas inserted in the catalogue
Doctor Zikos inserted in the catalogue
Doctor Kamenos inserted in the catalogue
#########################
HOSPITAL DOCTOR: Ioannou 697123456 cardiologist Hadjikosta 12345
HOSPITAL DOCTOR: Pappas 697234567 surgeon GH Arta 12346
PRIVATE PRACTITIONER: Zikos 697777777 pathologist Asklipiou 12
PRIVATE PRACTITIONER: Kamenos 697888888 cardiologist Sikelianou 4
#########################
Doctor Pappas removed from the catalogue
#########################
HOSPITAL DOCTOR: Ioannou 697123456 cardiologist Hadjikosta 12345
PRIVATE PRACTITIONER: Zikos 697777777 pathologist Asklipiou 12
PRIVATE PRACTITIONER: Kamenos 697888888 cardiologist Sikelianou 4
#########################
Doctor Pappas is not in the catalogue
#########################
*/