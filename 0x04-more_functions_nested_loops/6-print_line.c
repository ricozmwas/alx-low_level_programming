#include "main.h"
/**
  * print_line - function that draws a straight line in the terminal.
  * @n: number of times the character _ should be printed
  *
  * Return: none
  */

void print_line(int n)

{
	while (n-- > 0)
	{
		_putchar('_');
	}

_putchar('\n');

}

