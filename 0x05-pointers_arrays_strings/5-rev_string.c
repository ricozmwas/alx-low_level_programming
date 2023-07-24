#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int back  = 0;
	int i;

	while (s[back] != '\0')
	back++;
	for (i = 0; i < back; i++)
	{
		back--;
		rev = s[i];
		s[i] = s[back];
		s[back] = rev;
	}
}

