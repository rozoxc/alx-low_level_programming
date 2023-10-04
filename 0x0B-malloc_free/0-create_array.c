#include "main.h"
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars
 * @size: size of strings
 * @c: character to be writen in every string
 * Return: return string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	i = 0;
	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
