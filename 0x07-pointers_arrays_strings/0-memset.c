#include <stdio.h>
#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: the pointer
 * @b: comstante byte
 *@n: the number whow array s be printd
 * Return: return the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n - 1)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
