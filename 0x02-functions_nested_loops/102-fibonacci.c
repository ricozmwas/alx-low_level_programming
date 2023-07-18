#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int b, c, next, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + c;
		b = c;
		c = next;
	}

	printf("%lu\n", sum);

	return (0);
}
