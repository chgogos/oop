#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee
{
  public:
    Employee();
    void display() const;
    void hire();
    void fire();
    // Getters and setters
    void setFirstName(string inFirstName);
    void setLastName(string inLastName);
    void setId(int inId);
    void setSalary(int inSalary);
    string getFirstName() const;
    string getLastName() const;
    int getSalary() const;
    bool getIsHired() const;
    int getId() const;

  private:
    int mId;
    string mFirstName;
    string mLastName;
    int mSalary;
    bool bHired;
};

#endif