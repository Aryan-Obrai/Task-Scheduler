#include "gtest/gtest.h"

#include "personal_test.hpp"
#include "study_test.hpp"
#include "work_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
