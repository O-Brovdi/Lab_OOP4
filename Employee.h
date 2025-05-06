#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee();
    Employee(string name, int id, double salary);

    virtual void Work();
    virtual void ShowInfo();
    virtual ~Employee() {}
};


class Manager : public Employee {
public:
    Manager(string name, int id, double salary);
    void Work() override;
};


class Developer : public Employee {
protected:
    string language;

public:
    Developer(string name, int id, double salary, string lang);
    void Work() override;
    void SetLanguage(string lang);
    void SetLanguage(string lang, int experience);
};


class TeamLead : public Developer {
public:
    TeamLead(string name, int id, double salary, string lang);
    void Work() override;
};


class Intern : public Developer {
public:
    Intern(string name, int id);
    void Work() override;
};

#endif
