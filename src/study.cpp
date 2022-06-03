#include "../header/study.h"

using namespace std;

Study::Study() {
    taskName = "Untitled";
    description = "N/A";
    priority = 0;
    classification = "Study";
    dueTime = "01-01-2000, 12:00 AM";
    complete = false;
}

Study::Study(string name, string desc, int prio, string dueDate, string dueClock): Task(name, desc, prio, dueDate, dueClock) {classification = "Study";}

void Study::printTask(){
    cout << "Task Name: " << getName() << endl;
    cout << "Description: " << getDesc() << endl;
    cout << "Priority: " << getPriority() << endl;
    cout << "Classification: " << getClass() << endl;
    cout << "Due on: " << getDue() << endl;
    cout << "Complete: " << (complete ? "True" : "False") << endl;
}

void Study::addResources(string res ) {
    resources.push_back(res);
}

void Study::addNotes(string note ) {
    notes.push_back(note);
}

void Study::printResources() {
   cout << "Resources: " << endl;
   for(int i = 0; i < resources.size(); i++){
      cout << i+1 << ". " << resources.at(i) << endl;
   }  	
}

void Study::printNotes() {
   cout << "Notes: " << endl;
   for(int i = 0; i < notes.size(); i++){
      cout << i+1 << ". " << notes.at(i) << endl;
   }    
}
