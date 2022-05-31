#ifndef __WORK_H__
#define __WORK_H__

#include "task.h"

using namespace std;

class Work: public Task  {
   private:
      string classification = "Work";
      string className;
      string workLink;
   public:
      Work();
      Work(string name, string desc, int prio, string dueDate, string dueClock, string className, string workLink);
      void printTask();
      void setClassName(string );
      string getClassName();
      void setLink(string );
      string getLink();
};

#endif
