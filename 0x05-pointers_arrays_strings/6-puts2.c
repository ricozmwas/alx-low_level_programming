#include "main.h"

/**
  * puts2 - prints every other character of a string
  * starting with the first character,
  * followed by a new line.
  *
  * @str: string
  */

void puts2(char *str)

{
	int len = 0;
	int t = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (z = 0 ; z <= t ; z++)
	{
		if (z % 2 == 0)
	{
		_putchar(str[z]);
	}
	}
	_putchar('\n');
}
