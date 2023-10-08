#include "main.h"
#include <stdlib.h>
/**
 * _lenght - funvtion return lenght of a string
 * @str: the string
 * Return: return the lenght
 */

int _lenght(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the seconde string
 * @n: the size of the string to be concated
 * Return: return the full string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j, a, b;

	j = _lenght(s1);
	ptr = malloc(sizeof(char) * (j + n + 1));
	if (ptr == NULL)
		return (NULL);
	a = 0;
	while (s1 && s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2 && s2[b] && b < n)
	{
		ptr[a] = s2[b];
		a++;
		b++;
	}
	ptr[a] = '\0';
	return (ptr);
}
