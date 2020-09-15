#include "task1.h"

#include "gtest/gtest.h"

TTEST(task1, test1)
{
	ASSERT_calc(2.14476105, calc(4.6), 0.00000001);

}

TEST(task1, test2)
{
	ASSERT_calc(1.41421356, calc(2.0), 0.00000001);

}

TEST(task1, test3)
{
	ASSERT_calc(7.41619848, calc(55.0), 0.00000001);
}

TEST(task1, test4)
{
	ASSERT_calc(50.66557016, calc(2567), 0.00000001);
}

TEST(task1, test5)
{
	ASSERT_calc(2.97993288, calc(8.88), 0.00000001);
}

TEST(task1, test6)
{
	ASSERT_good(good(4.0, 16.0));
}

TEST(task1, test7)
{
	ASSERT_good(good(8.0, 64.0));
}

TEST(task1, test8)
{
	ASSERT_good(good(11.4, 129.96));
}

TEST(task1, test9)
{
	ASSERT_good(good(56.5, 3192.25));
}

TEST(task1, test10)
{
	ASSERT_good(good(2.0, 4.0));
}


