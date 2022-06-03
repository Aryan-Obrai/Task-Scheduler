#ifndef __SCHEDULER_TEST_HPP__
#define __SCHEDULER_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/scheduler.h"
#include "../header/study.h"
#include "../header/work.h"
#include "../header/personal.h"

TEST(Scheduler, AddingTasks) {
    Study* first = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    Personal* second = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    Work* third = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    Scheduler test;
    test.addTask(first);
    test.addTask(second);
    test.addTask(third);
    EXPECT_EQ(test.fullList.size(), 3);
}
TEST(Scheduler, RemovingTasks) {
    Study* first = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    Personal* second = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    Work* third = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    Scheduler test;
    test.addTask(first);
    test.addTask(second);
    test.addTask(third);
    test.removeTask(first);
    test.removeTask(second);
    EXPECT_EQ(test.fullList.size(), 1);
}
#endif
