#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(3, average(2, 4));

}

TEST(task1, test2)
{
    ASSERT_EQ(1.41421356, calc(2));

}
