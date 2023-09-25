#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: first string
 * @accept: seconde string
 * Return: return she string  s begining whit the first character occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
