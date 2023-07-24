#include "main.h"

/**
  * puts_half - prints half of a string
  * followed by a new line.
  * if odd, n = (length_of_the_string - 1) / 2
  * @str: string
  */

void puts_half(char *str)
{
	int a, n, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
