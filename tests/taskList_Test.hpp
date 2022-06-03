#include "gtest/gtest.h"
#include "../header/taskList.h"
#include "../header/personal.h"
#include "../header/work.h"
#include "../header/study.h"
#include "../header/scheduler.h"

TEST(complete, is_false) {
   TaskList  testtaskList;

   EXPECT_FALSE(testtaskList.getComp());
}

TEST(complete, is_true) {
   TaskList testtaskList;

   testtaskList.setComp();

   EXPECT_TRUE(testtaskList.getComp());
}

TEST(printTask, default_constructor) {
   TaskList testTaskList;

   EXPECT_EQ(0, testtaskList.printTask());
}

TEST(printSubTasks, default_constructor) {
   TaskList testtaskList;

   EXPECT_EQ(0, testtaskList.printSubTasks());
}

TEST(addSubTask, default_constructor) {
   TaskList testtaskList;

   EXPECT_EQ(0, testtaskList.addSubTask());
}

TEST(deleteSubTask, default_constructor) {
   TaskList testtaskList;

   EXPECT_EQ(0, testtaskList.deleteSubTask());
}

