#ifndef __TASK_H__
#define __TASK_H__

#include <iostream>
#include <string>

using namespace std;

class Task {
   private:
      string taskName;
      string description;
      int priority;
      string classification;
      string dueTime;
      bool complete;
   public:
      Task(string name, string description, int priority, int dueTime);
      virtual void printTask() = 0;
      void setName(string );
      string getName();
      void setDesc(string );
      string getDesc();
      void setPriority(int );
      int getPriority();
      string getClass();
      void setDue(string , string );
      string getDue();
      void setComp();
      void setIncomp();
      bool getComp();
};

#endif
