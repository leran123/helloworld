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

TEST(fizzbuzz, should_return_string_15_when_input_number_is_15)
{
	EXPECT_TRUE(15 == answer(15));
}

TEST(fizzbuzz, should_be_1_when_given_1)
{
	EXPECT_STREQ("1", printString(1));
}

TEST(fizzbuzz, should_be_Fizz_when_given_3)
{
	EXPECT_STREQ("Fizz", printString(3));
}

TEST(fizzbuzz, should_be_Buzz_when_given_5)
{
	EXPECT_STREQ("Buzz", printString(5));
}

TEST(fizzbuzz, should_be_FizzBuzz_when_given_15)
{
	EXPECT_STREQ("FizzBuzz", printString(15));
}