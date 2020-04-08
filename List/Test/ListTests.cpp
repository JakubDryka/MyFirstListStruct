#include "List.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Maptest, GetRoomsShouldReturnOneRoom)
{
  list<int> l1;
  l1.pushBack(4);
  l1.pushBack(2);
  l1.pushBack(0);
  l1.pushBack(6);
  l1.pushBack(9);
  l1.print();
 ASSERT_EQ(l1.size(), 5);
}
