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

TEST(task1, test3)
{
    ASSERT_EQ(3, average(2));

}

TEST(task1, test4)
{
    ASSERT_EQ(3571, average(500));

}

TEST(task1, test5)
{
    ASSERT_EQ(2, average(1));

}

TEST(task1, test6)
{
    ASSERT_EQ(3, getPrime(2));

}

TEST(task1, test7)
{
    ASSERT_EQ(3571, getPrime(500));

}

TEST(task1, test8)
{
    ASSERT_EQ(2, getPrime(1));

}

TEST(task1, test9)
{
    ASSERT_EQ(3, getPrime(2));

}

TEST(task1, test10)
{
    ASSERT_EQ(3, getPrime(2));

}


