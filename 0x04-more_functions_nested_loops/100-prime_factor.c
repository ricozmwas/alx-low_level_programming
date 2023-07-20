#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main -  a program that finds and prints
  * the largest prime factor.
  *
  * Return: 0
 */

int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
