#include <stdio.h>
/**
 * _strncat: function cat string to another
 * @dest: dest string
 * @src : src string
 * @n : size of string
 *
 * Return: return string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i]  != '\0')
		i++;
	j = 0;
	while ((j < n - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	 dest[i] = '\0';
	return (dest);
}

