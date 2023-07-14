#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print numbers of base 16
 * and n lowercase
 *
 * Return: 0 (Success)
 */
int main(void)

{
	char alphabet;

	int number;

	for (number = 0; number <= 9; ++number)
	{
		putchar(number + '0');
	}
	for (alphabet = 'a'; alphabet <= 'f'; ++alphabet)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
