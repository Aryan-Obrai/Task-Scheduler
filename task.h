#ifndef __TASK_H__
#define __TASK_H__
using namespace std;

class Task{
   protected:
      string taskName;
      string description;
      int priority;
      string classification;
      int dueTime;
   public:
      Task(string name, string description, int priority, string classification, int due time);
      void display();
      CreateTask();   



}
#endif
