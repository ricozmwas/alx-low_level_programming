#include <stdlib.h>
#include <stdio.h>
/**
 * main - print numbers of base 10
 * without using printf
 * Return: 0 (True)
 */
int main(void)

{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');
	return (0);
}
