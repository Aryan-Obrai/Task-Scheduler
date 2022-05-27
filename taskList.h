#ifndef __TASKLIST_H__
#define __TASKLIST_H__

#include "task.h"
#include "work.h"
#include "study.h"
#include "personal.h"

using namespace std;

class TaskList {
   private:
      vector<Task> subTasks;
      bool allComplete;
   public:
      void printSubTasks();
      void setClass(Task* , string );
      void addSubTask(Task*);
      void deleteSubTask(Task*);
};

#endif
