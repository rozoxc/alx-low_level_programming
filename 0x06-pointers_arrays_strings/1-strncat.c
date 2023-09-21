#include <stdio.h>
/**
 * _strncat - copy a string from the src to  dest whit limie size
 * @dest : destnination string
 * @src : source string
 * @n : the size to be copied
 *
 * Return: return destination string complete
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i]  != '\0')
		i++;
	 j = 0;
	while (src[j] != '\0' && j < n - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
