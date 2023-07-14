#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combination of all three digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hund;
	int t;
	int o;
	int num;

	for (num = 0; num < 1000; num++)
	{
		hund = num / 100;
		t = (num / 10) % 10;
		o = num % 10;

		if (hund < t && t < o)
		{
			putchar(hund + '0');
			putchar(t + '0');
			putchar(o + '0');

			if (num < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
