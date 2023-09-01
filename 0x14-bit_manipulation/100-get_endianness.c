#include "main.h"

/**
 * get_endianness - checks if the machine is little or big endian
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (byte[0] == 1);
}

