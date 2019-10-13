#include "gtest/gtest.h"

class HelloFixture : public ::testing::Test {

};

TEST_F(HelloFixture, helloFixture) {
  ASSERT_TRUE(true);
}
