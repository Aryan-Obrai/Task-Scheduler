#include "../header/task.h"
#include "../header/scheduler.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Scheduler::Scheduler() {
    sortType = N;
    vector<Task> fullList;
}

void Scheduler::display() {
    int cnt;
    cout << "Tasks: " << endl;

    if(sortType == N) {
        for (int i = 0; i < fullList.size(); i++) {
            cout << i+1 << ". " << fullList.at(i).getName() << endl;
        }
    }
    
    if(sortType == W) {
        for (int i = 0; i < fullList.size(); i++) {
            if(fullList.at(i).getClass() == "Work") {
                cout << cnt+1 << ". " << fullList.at(i).getName() << endl;
                cnt++;
            }
        }
    }

    if(sortType == S) {
        for (int i = 0; i < fullList.size(); i++) {
            if(fullList.at(i).getClass() == "Study") {
                cout << cnt+1 << ". " << fullList.at(i).getName() << endl;
                cnt++;
            }
        }
    }

    if(sortType == P) {
        for (int i = 0; i < fullList.size(); i++) {
            if(fullList.at(i).getClass() == "Personal") {
                cout << cnt+1 << ". " << fullList.at(i).getName() << endl;
                cnt++;
            }
        }
    }
}

void Scheduler::addTask(Task* task) {
	fullList.push_back(task);	
}


void Scheduler::removeTask(Task* task) {
	for(int i = 0; i < fullList.size(); i++){
		if(task->getName() == fullList.at(i).getName()){
			fullList.erase(i);
		}
	}	
}

void Scheduler::sortTasks(char sortt) {
	sort(fullList.begin(), fullList.end(), [](Task* l, Task* r) {
		return l->getPriority() < r->getPriority();	
	});
}

void Scheduler::editDesc(Task* task, string newDesc) {
    task->setDesc(newDesc);
}

void Scheduler::editDue(Task* task, string newDate, string newTime) {
    task->setDue(newDate + ", " + newTime);
}

void Scheduler::editPrio(Task* task, int newPrio) {
    task->setPriority(newPrio);
}

void Scheduler::markComplete(Task* task) {
    task->setComp();
}

void Scheduler::markIncomplete(Task* task) {
    task->setIncomp();
}

void Scheduler::sort() {
    char type = sort;
    cout << "Which type of tasks would you like to see first?" << endl
         << "Enter a character: W - Work, S - Study, P - Personal. Type Q to quit." << endl;
    cin >> type;
    if (type != (W || S || P || Q)) {
        cin >> type;
    } else {
        if (type == Q) {
            return;
        }
    }
}

void Scheduler::undo() {
	fullList.pop_back();
}
