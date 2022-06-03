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
![Task UML Diagram - Page 1](https://user-images.githubusercontent.com/88170160/171793374-f970e7d6-385e-4cb7-8799-19b8be707ef0.png)

The UML diagram shown above explains the working flow of the current project. The design pattern here that was implemented allows for the control the creation of the types of tasks such as Task, TaskList, Work, Study, Personal, and the Scheduler. Implementing a Composite design pattern here allowed for different types of display depending on what calls the function. The way a Composite pattern is solved is through a common interface which declares a method. Task Creation will be helped out by the Task class which includes task specific variables such as priority, name, and due time. The Study class is a subclass of the class Task. With the variables classification, resources, and notes. The Work class is another subclass with variables className and workLink. Finally the Personal class contains the variable, goal. All of these subclasses of Task allow making specific tasks exclusive to their subclass.
 
 ## Screenshots
1. When running the program for the first time, it prompts for you to make a task:

![image](https://user-images.githubusercontent.com/88170160/171793471-1bd40924-4890-4631-9011-40a80a6a92dc.png)

2. Option menu

![image](https://user-images.githubusercontent.com/88170160/171794691-1714f956-30ec-4bab-b4d7-014ac9dd18c8.png)

3. Displaying tasks

![image](https://user-images.githubusercontent.com/88170160/171796930-2982bf42-d093-4fdb-acae-1f0a232a1799.png)


3. Option to change which classification of task is being displayed

![image](https://user-images.githubusercontent.com/88170160/171793601-7fc89712-e021-4990-8072-f6f13c92e5c2.png)

4. Adding new tasks

![image](https://user-images.githubusercontent.com/88170160/171795664-f7e94f45-518f-4a8a-b09a-5eb4f3450e43.png)

![image](https://user-images.githubusercontent.com/88170160/171795701-980b37f0-98f2-4fab-88a7-243722d035d3.png)

6. Changing properties of tasks

![image](https://user-images.githubusercontent.com/88170160/171795798-79a60f10-8caf-44be-a90e-c8b20a45d676.png)

![image](https://user-images.githubusercontent.com/88170160/171795950-29732392-baf2-4b69-ae3d-2ad7360ce686.png)

![image](https://user-images.githubusercontent.com/88170160/171797193-997d86e5-ea68-4549-9796-90e0eb71820c.png)


6. Deleting a task

![image](https://user-images.githubusercontent.com/88170160/171797259-b4a018bc-ee32-465a-bf54-47082c945ce5.png)

![image](https://user-images.githubusercontent.com/88170160/171797347-2c682e18-c2fd-4aa9-b35b-46026971b41c.png)


 ## Installation/Usage
To run the program, clone the repository and then run ```cmake3 .``` and ```make```. To run the program, use ```./TaskScheduler```.
 ## Testing
Our project was tested using multiple googletests for each class, and by CI.
