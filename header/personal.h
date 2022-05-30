#ifndef __PERSONAL_H__
#define __PERSONAL_H__

#include "task.h"

using namespace std;

class Personal: public Task  {
   private:
      string classification = "Personal";
      string goal;
   public:
      Personal();
      Personal(string name, string desc, int prio, string dueDate, string dueClock, string goal) 
        : Task(name, desc, prio, dueDate, dueClock) {this->goal = goal;};  
      void printTask();
      void setGoal(string );
      string getGoal();
};

#endif

