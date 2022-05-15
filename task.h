#ifndef __TASK_H__
#define __TASK_H__
using namespace std;

class Task{
   private:
      string taskName;
      string description;
      int priority;
      int classification;
      int dueTime;
   public:
      Task();
      void display();
      CreateTask();   



}
#endif
