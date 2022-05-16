#include "task.h"
#include <iostream>

using namespace std;

Task::Task() {
    taskName = "Untitled";
    description = "N/A";
    priority = 0;
    classification = "N/A";
    dueTime = "01-01-2000, 12:00 AM"
    complete = false;
}

Task::Task(string name, string desc, int prio, string dueDate, string dueClock) {
    taskName = name;
    description = desc;
    priority = prio;
    dueTime = dueDate + ", " + dueClock;
    complete = false;
}

virtual void Task::printTask() {
    cout << "Name: " << getName() << endl
         << "Description: " << getDesc() << endl
         << "Priority: " << getPriority() << endl
         << "Classification: " << getClass() << endl
         << "Due on: " << getDue() << endl
         << "Complete: " << (complete ? "True" : "False") << endl;
}

void Task::setName(string name) {
    taskName = name;
}

string Task::getName() {
    return taskName;
}

void Task::setDesc(string desc) {
    description = desc;
}

string Task::getDesc() {
    return description;
}

void Task::setPriority(int prio) {
    priority = prio;
}

int Task::getPriority() {
    return priority;
}

int Task::getClass() {
    return classification;
}

void Task::setDue(string dueDate, string dueClock) {
    dueTime = dueDate + ", " + dueClock;
}

void Task::getDue() {
    return dueTime;
}

void Task::setComp() {
    complete = true;
}

void Task::setIncomp() {
    complete = false;
}

bool Task::getComp() {
    return complete;
}
