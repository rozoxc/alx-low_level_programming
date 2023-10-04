#include "main.h"
#include <stdlib.h>
/**
 * _lenght - function return lenght of a string
 * @str: the string
 * Return: return the lenght of string
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
 * str_concat -  function that concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * Return: retrun the full string concated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *ptr;

	i = _lenght(s1);
	j = _lenght(s2);
	k = (i + j) + 2;
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
		exit(0);
	l = 0;
	while (s1[l] != '\0')
	{
		ptr[l] = s1[l];
		l++;
	}
	m = 0;
	while (s2[m] != '\0')
	{
		ptr[l] = s2[m];
		m++;
		l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
