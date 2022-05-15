#ifndef __TASKLIST_H__
#define __TASKLIST_H__
#include "task.h"
#include "project.h"
using namespace std;

class TaskList{
   private:
      vector<Task> Tasks;
   public:
      void display();
      void addTask();
      void deleteTask();
}

#endif
