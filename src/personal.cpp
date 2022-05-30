#include "../header/personal.h"

using namespace std;

Personal::Personal() {}

/*Personal::Personal(string name, string desc, int prio, string dueDate, string dueClock, string goal) : Task(name, desc, prio, dueDate, dueClock) {
    this->goal = goal;
}*/

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

