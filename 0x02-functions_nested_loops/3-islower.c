#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * @letter: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}
