#ifndef __PERSONAL_H__
#define __PERSONAL_H__

#include "task.h"

using namespace std;

class Personal: public Task  {
   private:
      string classification = "Personal";
      string goal;
   public:
      void printTask();
      void setGoal(string );
      string getGoal();
};

#endif
~

