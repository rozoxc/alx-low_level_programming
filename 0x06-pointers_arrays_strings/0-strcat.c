#include <stdio.h>
/**
 * _strcat -  function appends the src string to the dest string
 * @src: the source string
 * @dest: the destination string
 *
 * Return: return dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
