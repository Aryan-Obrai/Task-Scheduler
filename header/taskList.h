#ifndef __TASKLIST_H__
#define __TASKLIST_H__

#include "task.h"
#include "work.h"
#include "study.h"
#include "personal.h"

using namespace std;

class TaskList: public Task {
   private:
      vector<Task*> subTasks;
      bool allComplete;
   public:
      TaskList();
      ~TaskList();
      TaskList(string name, string desc, int prio, string dueDate, string dueClock, string className, string workLink);
      void printTask();
      void printSubTasks();
      void setClass(Task* , string );
      void addSubTask(Task*);
      void deleteSubTask(Task*);
};

#endif
