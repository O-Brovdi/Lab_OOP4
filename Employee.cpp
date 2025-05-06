#include "Employee.h"
using namespace std;


Employee::Employee() : name("Unnamed"), id(0), salary(0.0) {}

Employee::Employee(string name, int id, double salary)
    : name(name), id(id), salary(salary) {}

void Employee::Work() {
    cout << name << " is doing general employee tasks.\n";
}

void Employee::ShowInfo() {
    cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << "\n";
}


Manager::Manager(string name, int id, double salary)
    : Employee(name, id, salary) {}

void Manager::Work() {
    cout << name << " is managing the team.\n";
}


Developer::Developer(string name, int id, double salary, string lang)
    : Employee(name, id, salary), language(lang) {}

void Developer::Work() {
    cout << name << " is coding in " << language << ".\n";
}

void Developer::SetLanguage(string lang) {
    language = lang;
}


TeamLead::TeamLead(string name, int id, double salary, string lang)
    : Developer(name, id, salary, lang) {}

void TeamLead::Work() {
    cout << name << " is leading the dev team and writing " << language << " code.\n";
}


Intern::Intern(string name, int id)
    : Developer(name, id, 500.0, "C++") {}

void Intern::Work() {
    cout << name << " is learning and helping with simple tasks.\n";
}
