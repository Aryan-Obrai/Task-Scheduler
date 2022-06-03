#include "../header/taskList.h"
#include "../header/task.h"
#include "../header/work.h"
#include "../header/study.h"
#include "../header/personal.h"
#include <iostream>
#include <vector>

using namespace std;

TaskList::TaskList() {
    taskName = "Untitled List";
    description = "N/A";
    priority = 0;
    classification = "N/A";
    dueTime = "01-01-2000, 12:00 AM";
    complete = false;
    vector<Task*> subTasks;
    allComplete = false;
}
TaskList::~TaskList(){
   for(int i = 0; i < subTasks.size(); i++){
        delete subTasks.at(i);
    }
}
TaskList::TaskList(string name, string desc, int prio, string dueDate, string dueClock, string className, string workLink) {
    taskName = name + " List";
    description = desc;
    priority = prio;
    classification = "List";
    dueTime = dueDate + ", " + dueClock;
    complete = false;
    vector<Task*> subTasks;
    allComplete = false;
}

void TaskList::printTask() {
    cout << "Name: " << getName() << endl
         << "Description: " << getDesc() << endl
         << "Priority: " << getPriority() << endl
         << "Due on: " << getDue() << endl
         << "List Complete: " << (allComplete ? "True" : "False") << endl;
}

void TaskList::printSubTasks(){
for (int i = 0; i < subTasks.size(); i++){
cout << (i + 1) << ". " << subTasks[i] -> getName() << endl;
}
}

void TaskList::setClass(Task* oldTask, string clas ) {
oldTask->setClass(clas);    
}

void TaskList::addSubTask(Task* _Task) {
    subTasks.push_back(_Task);
}

void TaskList::deleteSubTask(Task* _Task) {
 for ( int i = 0; i < subTasks.size(); i++){
	if (_Task == subTasks[i]){
		delete _Task;
	 subTasks.erase(subTasks.begin() + i);
	break;	
	}
}   
	
}
