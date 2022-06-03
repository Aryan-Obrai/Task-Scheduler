#ifndef __PERSONAL_TEST_HPP__
#define __PERSONAL_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/personal.h"

TEST(PersonalConstructor, PersonalGoal) {
    Personal* test = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    EXPECT_EQ(test->getGoal(), "workout for an hour");
}

TEST(PersonalConstructor, PersonalName) {
    Personal* test = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    EXPECT_EQ(test->getName(), "Workout");
}
TEST(PersonalConstructor, PersonalDesc) {
    Personal* test = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    EXPECT_EQ(test->getDesc(), "Go to gym and do chest");
}
TEST(PersonalConstructor, PersonalDue) {
    Personal* test = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    EXPECT_EQ(test->getDue(), "06/06/22, 11:00 am");
}
TEST(PersonalConstructor, PersonalPriority) {
    Personal* test = new Personal("Workout", "Go to gym and do chest", 1 ,  "06/06/22", "11:00 am", "workout for an hour");
    EXPECT_EQ(test->getPriority(), 1);
}
#endif
