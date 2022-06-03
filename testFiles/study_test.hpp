#ifndef __STUDY_TEST_HPP__
#define __STUDY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/study.h"

TEST(StudyConstructor, StudyName) {
    Study* test = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    EXPECT_EQ(test->getName(), "Study");
}
TEST(StudyConstructor, StudyDesc) {
    Study* test = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    EXPECT_EQ(test->getDesc(), "prepare for cs final");
}
TEST(StudyConstructor, StudyDue) {
    Study* test = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    EXPECT_EQ(test->getDue(), "06/06/22, 11:00 am");
}
TEST(StudyConstructor, StudyPriority) {
    Study* test = new Study("Study", "prepare for cs final", 1 ,  "06/06/22", "11:00 am");
    EXPECT_EQ(test->getPriority(), 1);
}
#endif
