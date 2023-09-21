#include <stdio.h>
/**
 * _strncpy - function copy string to another white specifide the size
 * @dest: the dedtination string
 * @src: the source string
 * @n : the size
 *
 * Return: return the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i > n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
