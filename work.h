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
      void printTask();
      void setClassName(string );
      string getClassName();
      void setLink(string );
      string getLink();
};

#endif
