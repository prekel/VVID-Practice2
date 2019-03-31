#ifndef VARIANT29TESTS_H
#define VARIANT29TESTS_H

#include <QVector>

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <Variant29.h>

TEST(Variant29Tests, Test1)
{
	QVector<double> a = {155, 165, -175, -185};
	EXPECT_TRUE(Variant29(a));
}

TEST(Variant29Tests, Test2)
{
	QVector<double> a = {155, 165, -166, -176};
	EXPECT_TRUE(Variant29(a));
}

TEST(Variant29Tests, Test3)
{
	QVector<double> a = {155, 165, -160, -170};
	EXPECT_FALSE(Variant29(a));
}

TEST(Variant29Tests, MeanNegativeTest)
{
	QVector<double> a = {155, 165, -175, -185};
	EXPECT_LT(fabs(180 - MeanNegative(a)), 1e-6);
}

TEST(Variant29Tests, MeanPositiveTest)
{
	QVector<double> a = {155, 165, -175, -185};
	EXPECT_LT(fabs(160 - MeanPositive(a)), 1e-6);
}

#endif // VARIANT29TESTS_H
