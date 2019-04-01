#ifndef VARIANT30TESTS_H
#define VARIANT30TESTS_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <Variant30.h>

TEST(Variant30Tests, Test1)
{
	// 4: 3, 4
	// 5: 5, 8
	QVector<int> a = {1, 2, 3, 4, 4, 5, 6, 7, 5};

	auto b = Variant30(a);

	ASSERT_EQ(2, b.size());

	ASSERT_EQ(2, b[4].size());
	ASSERT_EQ(3, b[4][0]);
	ASSERT_EQ(4, b[4][1]);

	ASSERT_EQ(2, b[5].size());
	ASSERT_EQ(5, b[5][0]);
	ASSERT_EQ(8, b[5][1]);
}

#endif // VARIANT30TESTS_H
