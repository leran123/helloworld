#include "FizzBuzz.h"
#include <stdio.h>

int answer(int number)
{
	if (number % 3 == 0 && number % 5 == 0)
		return 15;

	if (number % 3 == 0)
		return 3;

	if (number % 5 == 0)
		return 5;

	return number;
}

struct number_str_mapping
{
	int number;
	char * map_string;
};

char * printString(int number)
{
	static char number_str[100] = { 0 };

	number_str_mapping map[] =
	{
		{3,		"Fizz"},
		{5,		"Buzz"},
		{15,	"FizzBuzz"}
	};

	for (int i = 0; i < sizeof(map) / sizeof(map[0]); ++i)
	{
		if (map[i].number == number)
		{
			snprintf(number_str, 100,"%s", map[i].map_string);
			return number_str;
		}
	}

	snprintf(number_str, 100,"%d", number);
	return number_str;
}