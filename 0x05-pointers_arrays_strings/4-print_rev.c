#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: string parameter
  *
  */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	int i;

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		s--;
	}
	_putchar('\n');
}
