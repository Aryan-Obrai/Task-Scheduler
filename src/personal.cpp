#include "../header/personal.h"

using namespace std

Personal::Personal(){
    taskName = "Untitled";
    description = "N/A";
    priority = 0;
    classification = "Study";
    dueTime = "01-01-2000, 12:00 AM"
    complete = false;
    goal = "N/A"
}
void Personal::printTask(){
cout << "Task Name: " << getName() << endl;
cout << "Description: " << getDesc() << endl;
cout << "Goal: " << getGoal() << endl;
cout << "Priority: " << getPriority() << endl;
cout << "Classification: " << getClass() << endl;
cout << "Due on: " << getDue() << endl;
cout << "Complete: " << (getComp() ? "True" : "False") << endl;
}
void Personal::setGoal(string g){
goal = g;
}
string Personal::getGoal(){
return goal;
}

