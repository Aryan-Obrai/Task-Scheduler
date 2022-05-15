#ifndef __PROJECT_H__
#define __PROJECT_H__
#include "task.h"
using namespace std;

class Project{
   private:
      string ProjectName;
      string description;
      int priority;
      int classification;
      int dueTime;
      vector<Task> subTasks;
   public:
      Project();
      void display();
      void addTask();
      void deleteTask();
      void CreateTask();


}
#endif
