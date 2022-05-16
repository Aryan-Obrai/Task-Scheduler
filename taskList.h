#ifndef __TASKLIST_H__
#define __TASKLIST_H__

#include "task.h"

using namespace std;

class TaskList {
   private:
      vector<Task> subTasks;
      bool allComplete;
   public:
      void printSubTasks();
      void setClass(char );
      void addSubTask(Task*);
      void deleteSubTask(Task*);
};

#endif
