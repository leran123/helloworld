#include <gtest/gtest.h>
#include "fizzbuzz.h"

TEST(fizzbuzz, should_return_string_1_when_input_number_is_1)
{
	EXPECT_TRUE(1 == answer(1));
}

TEST(fizzbuzz, should_return_string_2_when_input_number_is_2)
{
	EXPECT_TRUE(2 == answer(2));
}

TEST(fizzbuzz, should_return_string_3_when_input_number_is_3)
{
	EXPECT_TRUE(3 == answer(3));
}

TEST(fizzbuzz, should_return_string_3_when_input_number_is_6)
{
	EXPECT_TRUE(3 == answer(6));
}

TEST(fizzbuzz, should_return_string_5_when_input_number_is_5)
{
	EXPECT_TRUE(5 == answer(5));
}

TEST(fizzbuzz, should_return_string_5_when_input_number_is_10)
{
	EXPECT_TRUE(5 == answer(10));
}