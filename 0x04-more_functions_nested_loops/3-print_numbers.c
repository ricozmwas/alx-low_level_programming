#include "main.h"

/**
  * print_numbers - function that prints the numbers
  *  followed by a new line.
  *
  * Return: 0 (success)
  */

void print_numbers(void)

{
int i;

i = 0;
for  (i = '0'; i <= '9'; ++i)
{
_putchar(i);
}
_putchar('\n');

}
