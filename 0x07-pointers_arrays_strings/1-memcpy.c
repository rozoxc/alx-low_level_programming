#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination string
 * @src: source string to be copied
 * @n: the size of src copied
 *
 * Return: return destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
