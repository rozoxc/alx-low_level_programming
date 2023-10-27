#include "main.h"

/**
 * clear_bit - Clears a bit at a given index by setting it to 0.
 * @n: The number in which to clear the bit.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}

