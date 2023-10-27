#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve (0-based)
 * Return: The value of the bit at the specified inde
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((int)((n >> index) & 1));
}

