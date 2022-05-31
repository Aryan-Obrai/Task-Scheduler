#include "task.h"
#include "work.h"
#include "study.h"
#include "personal.h"
#include "scheduler.h"
#include "tasklist.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Task* createTask() {
    char nType;
    string nName, nDesc, nClass, nDate, nClock, nParam1, nParam2; //new Params for creating new/differnt tasks
    int nChoice, nPrio;

    cout << "What type of task would you like to register?" << endl
         << "N - None, W - Work, S - Study, P - Personal" << endl;
    cin >> nType;

    cout << "Enter the name of the task: " << endl;
    cin >> nName;

    cout << "Enter a description for the task: " << endl;
    cin.ignore();
    getline(cin, nDesc);

    cout << "Enter a priority 1-10 (with 10 being the highest) for the task: " << endl;
    cin >> nPrio;

    cout << "Enter the date when the task is due: " << endl;
    cin.ignore();
    getline(cin, nDate);

    cout << "Enter the time the task should be complete: " << endl;
    cin.ignore();
    getline(cin, nClock);


    if(nType == 'N' || nType == 'n') {
        Task* t = new Task(nName, nDesc, nPrio, nDate, nClock);
        return t;
    }

    if(nType == 'W' || nType == 'w') {
        cout << "Enter the class name: " << endl;
        cin.ignore();
        cin >> nParam1;

        cout << "Enter the link for the assignment: " << endl;
        cin.ignore();
        cin >> nParam2;

        Work* t = new Task(nName, nDesc, nPrio, nDate, nClock, nParam1, nParam2);
        return t;
    }

    if(nType == 'S' || nType == 's') {
        cout << "Add a resource for studying: " << endl;
        cin.ignore();
        cin >> nParam1;

        cout << "Add a note: " << endl;
        cin.ignore();
        cin >> nParam2;

        Study* t = new Task(nName, nDesc, nPrio, nDate, nClock, nParam1, nParam2);
        return t;
    }

    if(nType == 'P' || nType == 'p') {
        cout << "Enter your goal: " << endl;
        cin.ignore();
        cin >> nParam1;

        Personal* t = new Task(nName, nDesc, nPrio, nDate, nClock);
        return t;
    }
}

int main(int argc, char* argv[]) {
    Scheduler s;

    char choice;

    cout << "Enter your first task: " << endl
    CreateTask();

    while(true) {
        cout << "1. Display tasks" << endl
         << "2. Sort tasks" << endl
         << "3. Add Task" << endl
         << "4. Edit Task" << endl
         << "5. Quit" << endl;

        cin >> choice;

        if (choice == '1') {
            s.display();
        }

        if (choice == '2') {
            s.sort();

        }

        if (choice == '3') {
            s.addTask(createTask());
        }

        if (choice == '4') {
            string tString;
            int tInt;
            Task* tmp;

            cout << "Enter the name of the Task: " << endl;
            cin >> tName;

            for(int i = 0; i < s.fullList.size(); ++i) {
                if(tString == s.fullList.at(i)) {
                    tmp = s.fullList.at(i);
                }
            }

            cout << "1. Edit Description" << endl
            << "2. Edit Due Date" << endl
            << "3. Edit Priority" << endl
            << "4. Mark complete" << endl
            << "5. Mark incomplete" << endl
            << "6. Delete Task" << endl
            << "7. Undo" << endl;

            cin >> choice;

            if (choice == '1') {
                cout << "Enter a new description: " << endl;
                cin.ignore();
                getline(cin, tString);
                s.editDesc(tmp, tString);
            }

            if (choice == '2') {
                string newClock;

                cout << "Enter the date when the task is due: " << endl;
                cin.ignore();
                getline(cin, tString);

                cout << "Enter the time the task should be complete: " << endl;
                cin.ignore();
                getline(cin, newClock);

                s.editDue(tmp, tString, newClock);
            }

            if (choice == '3') {
                cout << "Enter a new priority 1-10 (with 10 being the highest)" << endl;
                cin >> tInt;
                s.editPrio(tmp, tInt);
            }

            if (choice == '4') {
                cout << "Task marked as complete" << endl;
                s.markComplete(tmp);
            }

            if (choice == '5') {
                cout << "Task marked as incomplete" << endl;
                s.markIncomplete(tmp);
            }
            
            if (choice == '6') {
                //complete later when implemented
            }
                
            if (choice == '7') {
                s.undo();
                }
            }

            if (choice == '5') {
                delete tmp;
                break;
            }
        }
    }
