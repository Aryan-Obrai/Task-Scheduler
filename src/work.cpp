#include "../header/work.h"
#include <iostream>

using namespace std;

Work::Work() {
    taskName = "Untitled";
    description = "N/A";
    priority = 0;
    classification = "Work";
    dueTime = "01-01-2000, 12:00 AM";
    complete = false;

    className = "N/A";
    workLink = "https://link.com";
}

Work::Work(string name, string desc, int prio, string dueDate, string dueClock, string className, string workLink): Task(name, desc, prio, dueDate, dueClock) {
    this->className = className;
    this->workLink = workLink;
    Task::classification = "Work";
}

void Work::printTask() {
    cout << "Name: " << getName() << endl
         << "Description: " << getDesc() << endl
         << "Priority: " << getPriority() << endl
         << "Classification: " << getClass() << endl
         << "Due on: " << getDue() << endl
         << "Class Name: " << getClassName() << endl
         << "Link to work: " << getLink() << endl
         << "Complete: " << (complete ? "True" : "False") << endl;
}

void Work::setClassName(string name) {
    className = name;
}

string Work::getClassName() {
    return className;
}

void Work::setLink(string workLink) {
    this->workLink = workLink;
}

string Work::getLink() {
    return workLink;
}
