#include "Employee.h"
using namespace std;

Employee::Employee() : name("Unnamed"), id(0), salary(0.0) {}

Employee::Employee(string name, int id, double salary)
    : name(name), id(id), salary(salary) {}

void Employee::Work() {
    cout << name << " виконує загальні завдання співробітника.\n";
}

void Employee::ShowInfo() {
    cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << "\n";
}


Manager::Manager(string name, int id, double salary)
    : Employee(name, id, salary) {}

void Manager::Work() {
    cout << name << " керує командою.\n";
}


Developer::Developer(string name, int id, double salary, string lang)
    : Employee(name, id, salary), language(lang) {}

void Developer::Work() {
    cout << name << " пише код в " << language << ".\n";
}

void Developer::SetLanguage(string lang) {
    language = lang;
}

void Developer::SetLanguage(string lang, int experience) {
    language = lang;
    cout << name << " змінив мову на " << lang
         << " з досвідом " << experience << " років.\n";
}


TeamLead::TeamLead(string name, int id, double salary, string lang)
    : Developer(name, id, salary, lang) {}

void TeamLead::Work() {
    cout << name << " очолює команду розробників та пише тексти на " << language << " code.\n";
}


Intern::Intern(string name, int id)
    : Developer(name, id, 500.0, "C++") {}

void Intern::Work() {
    cout << name << " навчається та допомагає з простими завданнями.\n";
}