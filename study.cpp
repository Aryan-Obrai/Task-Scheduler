#include "study.h"

using namespace std;

void Study::printTask(){
cout << "Task Name: " << getName() << endl;
cout << "Description: " << getDesc() << endl;
cout << "Priority: " << getPriority() << endl;
cout << "Classification: " << getClass() << endl;
cout << "Due on: " << getDue() << endl;
cout << "Complete: " << (complete ? "True" : "False") << endl;
}
void Study::addResources(string res ){
resources.pushback(res);
}
void Study::addNotes(string note ){
notes.pushback(note);
}
void Study::printResources(){
   cout << "Resources: " << endl;
   for(int i = 0; i < resources.size(); i++){
      cout << i+1 << ". " << resources.at(i) << endl;
   }  	
}
void Study::printNotes(){
   cout << "Notes: " << endl;
   for(int i = 0; i < notes.size(); i++){
      cout << i+1 << ". " << notes.at(i) << endl;
   }    
}
