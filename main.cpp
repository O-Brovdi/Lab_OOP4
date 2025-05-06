#include "Employee.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Employee* e1 = new Manager("Anna", 101, 5000);
    Employee* e2 = new Developer("Bohdan", 102, 4000, "Python");
    Employee* e3 = new TeamLead("Ivan", 103, 6000, "Java");
    Employee* e4 = new Intern("Yurii", 104);

    e1->Work();
    e2->Work();
    e3->Work();
    e4->Work();

    Developer* dev = new Developer("Roman", 105, 4500, "C++");
    dev->SetLanguage("Java");
    dev->SetLanguage("Python", 3);
    delete dev;

    delete e1;
    delete e2;
    delete e3;
    delete e4;

    return 0;
}
