#ifndef VARIANT01TESTS_H
#define VARIANT01TESTS_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <Variant01.h>

TEST(Variant01Tests, MinimalValueTest)
{
	QVector<double> a = {12, 23, 123, -12, -13, 0, 213};
	ASSERT_EQ(-13, MinValue(a));
}

TEST(Variant01Tests, ReplaceTest)
{
	QVector<double> a = {1, 2, 2, 3, 4, 5};

	ASSERT_EQ(6, a.size());
	ASSERT_EQ(1, a[0]);
	ASSERT_EQ(2, a[1]);
	ASSERT_EQ(2, a[2]);
	ASSERT_EQ(3, a[3]);
	ASSERT_EQ(4, a[4]);
	ASSERT_EQ(5, a[5]);

	Replace(a, 2, -100);

	ASSERT_EQ(6, a.size());
	ASSERT_EQ(1, a[0]);
	ASSERT_EQ(-100, a[1]);
	ASSERT_EQ(-100, a[2]);
	ASSERT_EQ(3, a[3]);
	ASSERT_EQ(4, a[4]);
	ASSERT_EQ(5, a[5]);
}

TEST(Variant01Tests, AverageTest)
{
	QVector<double> a = {1, 2, 3, 4};

	auto avg = AverageValue(a);

	ASSERT_LT(fabs(avg - 2.5), 1e-6);
}

TEST(Variant01Tests, SelectEvenTest)
{
	QVector<double> a = {1, 2, 3, 4, 5, 6, 7};

	ASSERT_EQ(7, a.size());
	ASSERT_EQ(1, a[0]);
	ASSERT_EQ(2, a[1]);
	ASSERT_EQ(3, a[2]);
	ASSERT_EQ(4, a[3]);
	ASSERT_EQ(5, a[4]);
	ASSERT_EQ(6, a[5]);
	ASSERT_EQ(7, a[6]);

	auto b = SelectEven(a);

	ASSERT_EQ(3, b.size());
	ASSERT_EQ(2, b[0]);
	ASSERT_EQ(4, b[1]);
	ASSERT_EQ(6, b[2]);
}

TEST(Variant01Tests, Test1)
{
	QVector<double> a = {1, 1, 2, 3, 4};

	ASSERT_EQ(5, a.size());
	ASSERT_EQ(1, a[0]);
	ASSERT_EQ(1, a[1]);
	ASSERT_EQ(2, a[2]);
	ASSERT_EQ(3, a[3]);
	ASSERT_EQ(4, a[4]);

	Variant01(a);

	ASSERT_EQ(5, a.size());
	ASSERT_LT(fabs(2 - a[0]), 1e-6);
	ASSERT_LT(fabs(2 - a[1]), 1e-6);
	ASSERT_EQ(2, a[2]);
	ASSERT_EQ(3, a[3]);
	ASSERT_EQ(4, a[4]);
}

#endif // VARIANT01TESTS_H
