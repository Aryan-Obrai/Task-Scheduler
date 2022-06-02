#include "gtest/gtest.h"
#include "../header/scheduler.h"
#include "../header/personal.h"
#include "../header/work.h"
#include "../header/study.h"

TEST(create_scheduler, constructor){
	Scheduler t;
	EXPECT_EQ("n", t.sortType());
}
TEST(sort_tasks, sorting){
	Scheduler t;
	EXPECT_EQ("w", t.sort());
}

TEST(display_tasks, default_constructor) {
   Scheduler testS;
   EXPECT_EQ(0, testS.display());
}

TEST(add_task, adding){
	Scheduler testS;
	Task t = new Task();
	EXPECT_EQ(0, testS.addTask(t));
}

TEST(edit_task_description, editDescrip){
	Scheduler testS;
	Task* t = new Task();
	testS.addTask(t);
	EXPECT_EQ("testD",testS.editDesc(t, "testD"));
} 

TEST(edit_task_priority, editPrio){
        Scheduler testS;
        Task* t = new Task();
        testS.addTask(t);
        EXPECT_EQ(1,testS.editDesc(t, 1));
}  

TEST(quick_undo, undoTest){
	Scheduler testS;
	Task* t = new Task();
	Task* removeMe = new Task();
	testS.addTask(t);
	testS.addTask(removeMe);
	EXPECT_EQ(0, testS.undo();)
}

TEST(marking_complete, markingTest){
	Scheduler* testS;
	Task* t = new Task();
	testS.addTask(t);
	EXPECT_TRUE(testS.markComplete(t));
} 

TEST(marking_incomplete, markingTest){
        Scheduler* testS;
        Task* t = new Task();
        testS.addTask(t);
        EXPECT_FALSE(testS.markIncomplete(t));
}

TEST(remove_task, removeTest){
	Scheduler testS;
        Task* t = new Task();
        Task* e = new Task();
        testS.addTask(t);
        testS.addTask(e);
        EXPECT_EQ(0, testS.removeTask(t));
}

TEST(sortTasks, sortAllTasks){
	Scheduler* testS;
	Task* t = new Task();
        Task* e = new Task();
	Task* a = new Task();
        Task* b = new Task();
	testS.add(t);
	testS.add(e);
	testS.add(a);
	testS.add(b);
	testS.editPrio(t, 6);
	testS.editPrio(e, 1);
	testS.editPrio(a, 8);
	testS.editPrio(b, 2);
	testS.sortTasks()
	EXPECT_EQ(0, testS.display());
}
