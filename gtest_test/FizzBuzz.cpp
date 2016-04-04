#include "FizzBuzz.h"

int answer(int number)
{
	if (number % 3 == 0)
		return 3;

	if (number % 5 == 0)
		return 5;

	return number;
}