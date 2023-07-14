#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char letr;

	for (letr = 'a'; letr <= 'z'; letr++)
		putchar(letr);

	putchar('\n');

	return (0);
}
