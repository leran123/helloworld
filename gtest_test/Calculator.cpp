#include "Calculator.h"
#include <string.h>
#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

int count(int times)
{
	int temp = 0;
	char ac[1024 * 10];

	for (int i = 0; i < times*100; i++)
	{
		temp = i + 1;
		memcpy(ac, ac, sizeof(ac));
	}

	return temp;
}

void test_cpu_10000()
{
	count(10000);
}
void test_cpu_1000000()
{
	count(1000000);
}
void test_cpu_100000000()
{
	count(100000000);
}

bool is_little_endian()
{
	int temp = 0x01020304;
	return (*((char *)&temp) == 0x04);
}

bool is_big_endian()
{
	int temp = 0x01020304;
	int * temp_addr = &temp;
	return (*(char *)&temp) == 0x01;
}

int Calculator::add(int leftNum, int rightNum)
{
	int begin = clock();  // unit is ms
	is_little_endian();
	is_big_endian();
	test_cpu_10000();
	int end = clock();

	cout << "time elapsed is " << end - begin << endl;
	return leftNum + rightNum;
}

int Calculator::multi(int leftNum, int rightNum)
{
	while (true)
	{
		int i = 3333;
	}
	return leftNum * rightNum;
}
