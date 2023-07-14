#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints lowercase except e and q
 *
 * Return: 0 (success)
 *
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
