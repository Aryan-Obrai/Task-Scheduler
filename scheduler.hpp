#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <iostream>
#include <string>

using namespace std;

class Scheduler: public Task {
  private:
    vector<Task> fullList;
  public:
    void display();
    void addTask(Task*);
    void removeTask(Task*);
    void sortTasks(char);
    void editDesc(Task*, string);
    void editDue(Task*, string, string);
    void editPrio(Task*, int);
    void markComplete(Task*);
    void markIncomplete(Task*);
    void sort(char, char);
    void undo();
};

#endif

