#ifndef __PROJECT_H__
#define __PROJECT_H__
#include "task.h"
using namespace std;

class Project: public Task{
   private:
      vector<Task> subTasks;
   public:
      Project(string name, string description, int priority, string classification, int due time);
}
#endif
