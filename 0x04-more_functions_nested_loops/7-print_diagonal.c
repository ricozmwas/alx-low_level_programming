#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  * @n: is the number of times the character \ should be printed.
  *
  * Return: none
  */

void print_diagonal(int n)

{
	while (n-- > 0)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
