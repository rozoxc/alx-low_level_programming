#include "main.h"
#include <stdlib.h>
/**
 * _lenght - function return a string lenght
 * @str: the string
 * Return: return a lenght of string
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
 * _strdup -  function that returns a pointer that return a copy of str
 * @str: the string
 * Return: return the ptr strinng
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j, k;

	if (str == NULL)
		return (NULL);
	i = _lenght(str) - 1;
	k = _lenght(str);
	j = 0;
	ptr = malloc(sizeof(char) * (k + 1));
	if (ptr == NULL)
		exit(0);
	while (j <= i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
