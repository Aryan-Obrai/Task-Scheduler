#include "gtest/gtest.h"
#include "../header/taskList.h"
#include "../header/personal.h"
#include "../header/work.h"
#include "../header/study.h"
#include "../header/scheduler.h"

TEST(complete, is_false) {
   taskList  testtaskList;

   EXPECT_FALSE(testtaskList.complete());
}

TEST(complete, is_true) {
   Task testtaskList;

   testtaskList.mark_as_complete();

   EXPECT_TRUE(testtaskList.complete());
}

TEST(printTask, default_constructor) {
   Task testTask;

   EXPECT_EQ(0, testtaskList.printTask());
}

TEST(printSubTasks, default_constructor) {
   Task testtaskLists;

   EXPECT_EQ(0, testtaskList.printSubTasks());
}

TEST(addSubTask, default_constructor) {
   Task testtaskLists;

   EXPECT_EQ(0, testtaskList.addSubTask());
}

TEST(deleteSubTask, default_constructor) {
   Task testtaskList;

   EXPECT_EQ(0, testtaskList.deleteSubTask());
}

