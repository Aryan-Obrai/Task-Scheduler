#include "../header/personal.h"

using namespace std;

Personal::Personal() {
    taskName = "Untitled";
    description = "N/A";
    priority = 0;
    classification = "Personal";
    dueTime = "01-01-2000, 12:00 AM";
    complete = false;
    goal = "N/A";
}

Personal::Personal(string name, string desc, int prio, string dueDate, string dueClock, string goal) : Task(name, desc, prio, dueDate, dueClock) {
    this->goal = goal;
    classification = "Study";
}

void Personal::printTask(){
    cout << "Task Name: " << getName() << endl
         << "Description: " << getDesc() << endl
         << "Goal: " << getGoal() << endl
         << "Priority: " << getPriority() << endl
         << "Classification: " << getClass() << endl
         << "Due on: " << getDue() << endl
         << "Goal: " << getGoal() << endl
         << "Complete: " << (getComp() ? "True" : "False") << endl;
}
void Personal::setGoal(string g){
    goal = g;
}
string Personal::getGoal(){
    return goal;
}

