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
![image](https://user-images.githubusercontent.com/88170160/166185816-dedb5560-d94a-4abe-835f-8fffb3431cf6.png)
This diagram shows the working flow of the project. The Strategy design pattern that was implemented was to control the creation of types of tasks, including task lists. Knowing that the project class will be composed of something else, the next logical step was to implement the Composite design pattern in which it will allow for different types of display depending on what calls this function. Task creation will be helped out by the task class which includes task specific vairables such as priority, name, and due time. Task creation will also gain help from the project class which includes elements such as subtasks, add task and delete task. The these interfaces are being directly communicated to with run and tasklist holds the items that are created using taskcreation. The run class will have a sort function as well to sort the tasks based on priority.
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
