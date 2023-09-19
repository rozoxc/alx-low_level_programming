#include <stdio.h>
/**
 * _strcpy - function copy a string to another
 * @dest: destination of the src
 * @src: the original string
 *
 * Return: return the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
