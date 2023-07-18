#include "main.h"

/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int b, j, k;

	for (b = 0; b <= 9; b++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = b * j;

			if ((k / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
