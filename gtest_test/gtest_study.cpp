#include <gtest/gtest.h>
#include "Calculator.h"


TEST(gtest_study, assert_types_test)
{
	EXPECT_TRUE(true) << "test true item";
	EXPECT_FALSE(false) << "test false" ;
}

TEST(CalculatorTest, add_1_2_should_return_3)
{
	Calculator calc;
	EXPECT_EQ(3, calc.add(1, 2));
}