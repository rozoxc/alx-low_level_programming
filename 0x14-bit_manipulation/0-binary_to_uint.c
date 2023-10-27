#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	j = lenght(b) - 1;
	result = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
		}
		else
			return (0);
		*b++;
	}
	return (result);
}
