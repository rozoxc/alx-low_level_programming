#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string whow got the character
 * @c: the character
 * Return: return the last arrary
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
