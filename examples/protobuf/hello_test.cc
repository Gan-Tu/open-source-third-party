#include "examples/protobuf/hello.h"

#include "gtest/gtest.h"

using HelloTest = ::testing::Test;

TEST_F(HelloTest, ShouldSetNameCorrectly) {
  std::string my_name = "Gan";
  std::string my_nickname = "Michael";

  Person person = CreatePerson(my_name);
  EXPECT_EQ(person.name(), my_name);

  person.set_name(my_nickname);
  EXPECT_NE(person.name(), my_name);
  EXPECT_EQ(person.name(), my_nickname);
}

// bazel test :hello_test --test_output=all
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}