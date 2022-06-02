#ifndef __TASK_H__
#define __TASK_H__

#include <iostream>
#include <string>

using namespace std;

class Task {
   protected:
      string taskName;
      string description;
      int priority;
      string classification;
      string dueTime;
      bool complete;
   public:
      Task();
      Task(string , string , int , string , string );
      virtual void printTask() = 0;
      void setName(string ); 
      void push_back(Task*);
      string getName();
      void setDesc(string );
      string getDesc();
      void setPriority(int );
      int getPriority();
      string getClass();
      void setClass(string );
      void setDue(string , string );
      string getDue();
      void setComp();
      void setIncomp();
      bool getComp();
};

#endif
