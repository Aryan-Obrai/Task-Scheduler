#include "gtest/gtest.h"
#include "../header/taskList.h"

TEST(complete, is_false) {
   taskList  testtaskList;

   EXPECT_FALSE(testtaskList.complete());
}

TEST(complete, is_true) {
   task testtaskList;

   testtaskList.mark_as_complete();

   EXPECT_TRUE(testtaskList.complete());
}

TEST(printTask, default_constructor) {
   task testTask;

   EXPECT_EQ(0, testtaskList.printTask());
}

TEST(printSubTasks, default_constructor) {
   task testtaskLists;

   EXPECT_EQ(0, testtaskList.printSubTasks());
}

TEST(addSubTask, default_constructor) {
   task testtaskLists;

   EXPECT_EQ(0, testtaskList.addSubTask());
}

TEST(deleteSubTask, default_constructor) {
   task testtaskList;

   EXPECT_EQ(0, testtaskList.deleteSubTask());
}

