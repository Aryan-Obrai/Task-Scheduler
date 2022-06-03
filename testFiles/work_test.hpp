#ifndef __WORK_TEST_HPP__
#define __WORK_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/work.h"

TEST(WorkConstructor, WorkLink) {
    Work* test = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    EXPECT_EQ(test->getLink(), "www.workingplace.org");
}

TEST(WorkConstructor, WorkName) {
    Work* test = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    EXPECT_EQ(test->getName(), "Business Meeting");
}
TEST(WorkConstructor, WorkDesc) {
    Work* test = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    EXPECT_EQ(test->getDesc(), "Discuss quarterly earnings");
}
TEST(WorkConstructor, WorkDue) {
    Work* test = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    EXPECT_EQ(test->getDue(), "06/06/22, 11:00 am");
}
TEST(WorkConstructor, WorkPriority) {
    Work* test = new Work("Business Meeting", "Discuss quarterly earnings", 1 ,  "06/06/22", "11:00 am", "Work", "www.workingplace.org");
    EXPECT_EQ(test->getPriority(), 1);
}
#endif
