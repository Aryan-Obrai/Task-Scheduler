#include "gtest/gtest.h"

#include "scheduler_test.hpp"
#include "taskList_Test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
