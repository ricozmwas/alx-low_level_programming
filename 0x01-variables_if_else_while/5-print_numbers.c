#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10
 *
 * Return: Always 0 (True)
 *
 */
int main(void)

{
	char number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
