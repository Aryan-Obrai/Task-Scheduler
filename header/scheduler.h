#ifndef __SCHEDULER_H__
#define __SCHEDULER_H__

#include "task.h"
#include "work.h"
#include "study.h"
#include "personal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scheduler: public Task {
  private:
    char sortType;
  public:
    vector<Task*> fullList;
    Scheduler();
    ~Scheduler();
    void display();
    void printTask();
    void addTask(Task* );
    void removeTask(Task* );
    void sortTasks();
    void editDesc(Task* , string );
    void editDue(Task* , string , string );
    void editPrio(Task* , int );
    void markComplete(Task* );
    void markIncomplete(Task* );
    void sort();
    void undo();
};

#endif
