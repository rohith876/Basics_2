#include "PrintColorCode.h"
#include <gtest/gtest.h>

TEST(PrintColoCodeTestSuite, AssertColorCodeManualItemsCount) {
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorMap();
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
}