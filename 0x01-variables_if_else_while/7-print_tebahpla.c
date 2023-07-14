#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print alphabet in reserve
 *
 * Return: 0 (True)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
