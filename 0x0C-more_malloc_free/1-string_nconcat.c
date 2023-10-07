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
	unsigned int i, j, k, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _lenght(s2);
	j = _lenght(s1);
	k = i + j;
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
		exit(0);
	a = 0;
	while (s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}
	b = 0;
	if (n >= i)
	{
		while (s2[b] != '\0')
		{
			ptr[a] = s2[b];
			a++;
			b++;
		}
	}
	else
	{
		while (s2[b] != '\0' && b < n)
		{
			ptr[a] = s2[b];
			a++;
			b++;
		}
	}
	ptr[a] = '\0';
	return (ptr);
}
