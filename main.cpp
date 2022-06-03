#include "./header/task.h"
#include "./header/scheduler.h"
#include "./header/work.h"
#include "./header/study.h"
#include "./header/personal.h"
#include "./header/taskList.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Task* createTask() {
    char nType = 'N';
    string nName, nDesc, nClass, nDate, nClock, nParam1, nParam2; //new Params for creating new/differnt tasks
    int nChoice, nPrio;

    cout << "What type of task would you like to register?" << endl
         << "W - Work, S - Study, P - Personal" << endl;
    cin >> nParam1;
    nType = nParam1[0];

    while ((nType != 'W') && (nType != 'S') && (nType != 'P') && (nType != 'w') && (nType != 's') && (nType != 'p')) {
        cout << "Please choose W, S, or P." << endl;
        cin >> nParam1;
        nType = nParam1[0];
    }

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
    getline(cin, nClock);


    /*if(nType == 'N' || nType == 'n') {
 *         Task* t = new Task(nName, nDesc, nPrio, nDate, nClock);
 *                 return t;
 *                     } */

    if(nType == 'W' || nType == 'w') {
        cout << "Enter the class name: " << endl;
        getline(cin, nParam1);

        cout << "Enter the link for the assignment: " << endl;
        cin.ignore();
        getline(cin, nParam2);

        Work* t = new Work(nName, nDesc, nPrio, nDate, nClock, nParam1, nParam2);
        return t;
    }

    if(nType == 'S' || nType == 's') {
        Study* t = new Study(nName, nDesc, nPrio, nDate, nClock);
        return t;
    }

    if(nType == 'P' || nType == 'p') {
        cout << "Enter your goal: " << endl;
        getline(cin, nParam1);

        Personal* t = new Personal(nName, nDesc, nPrio, nDate, nClock, nParam1);
        return t;
    }
}

int main(int argc, char* argv[]) {
    Scheduler s;

    char choice;

    cout << "Enter your first task: " << endl;
    s.addTask(createTask());

    while(true) {
        cout << endl <<"1. Display tasks" << endl
         << "2. Change display" << endl
         << "3. Add task" << endl
         << "4. Edit task" << endl
         << "5. Quit" << endl << endl;

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
            Task* tmp = new Work();

            cout << "Enter the name of the task: " << endl;
            cin >> tString;

            for(int i = 0; i < s.fullList.size(); ++i) {
                if(tString == s.fullList.at(i)->getName()) {
                    tmp = s.fullList.at(i);
                }
            }

            while(tString != tmp->getName()) {
                cout << "Task not found. Enter the name of the task:" << endl;
                cin >> tString;

                for(int i = 0; i < s.fullList.size(); ++i) {
                    if(tString == s.fullList.at(i)->getName()) {
                        tmp = s.fullList.at(i);
                    }
                }
            }

            cout << "1. Edit description" << endl
            << "2. Edit due date" << endl
            << "3. Edit priority" << endl
            << "4. Mark complete" << endl
            << "5. Mark incomplete" << endl
            << "6. Delete task" << endl << endl;

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
                s.removeTask(tmp);
            }
            }

            if (choice == '5') {
                break;
            }
        }
    }
