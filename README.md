# Task Scheduler
 
 Authors: [Ian Lamb](https://github.com/Rancho-Relaxo),
  [Andres Garcia](https://github.com/OnDress),
  [Harjyot Sidhu](https://github.com/hsidhu6),
  [Aryan Obrai](https://github.com/Ares278),
  [Arman Seth](https://github.com/armanseth)

## Project Description
For this group project we will be making a task scheduler. 
The reason we chose to create this for our project is because as college students, time management is one of the key skills to have to succeed in college. You need to be able to see the week ahead and see what assignments are due on what dates and sometimes it takes a lot of planning to do well in a lot of courses. We plan on using C++ as our primary coding language and we haven't yet decided what outside technologies will be implemented or utilized. Our project will be able to create tasks that have a title, description, classification, priority, duration, and due date. It will also be able to create and manage task lists with more than one task. The task lists will also be able to represent larger tasks which have substacked included. The user will be able to do or undo any of these operations and utilize any of these features with some of them being optional as well.

## Class Diagram
![image](https://user-images.githubusercontent.com/88170160/168518865-521eb62c-c2a1-4146-bb45-f5a2158d3279.png)

The UML diagram shown above explains the working flow of the current project. The design pattern here that was implemented allows for the control the creation of the types of tasks such as Task, TaskList, Work, Study, Personal, and the Scheduler. Implementing a Composite design pattern here allowed for different types of display depending on what calls the function. The way a Composite pattern is solved is through a common interface which declares a method. Task Creation will be helped out by the Task class which includes task specific variables such as priority, name, and due time. The Study class is a subclass of the class Task. With the variables classification, resources, and notes. The Work class is another subclass with variables className and workLink. Finally the Personal class contains the variable, goal. All of these subclasses of Task allow making specific tasks exclusive to their subclass. 

> ****** PUT YOUR UPDATED DESCRIPTION HERE ********

 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
