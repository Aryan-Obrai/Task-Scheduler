#ifndef __STUDY_H__
#define __STUDY_H__

#include "task.h"
#include <vector>

using namespace std;

class Study: public Task  {
   private:
      string classification = "Study";
      vector<string> resources;
      vector<string> notes;
   public:
      Study();
      Study(string name, string desc, int prio, string dueDate, string dueClock);
      void printTask();
      void printResources();
      void printNotes();
      void addResources(string );
      void addNotes(string );
};

#endif


