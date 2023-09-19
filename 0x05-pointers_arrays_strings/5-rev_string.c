#include "main.h"
#include <stdio.h>
/**
 * _strlen - function return the size of strin
 *  @s : stringi
 *
 *  Return: return integers
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * rev_string - function reverse string
 * @s: the string
 */

void rev_string(char *s)
{
	int i, x;
	char tmp;

	i = 0;
	x = _strlen(s) - 1;
	while (x > i)
	{
		tmp = s[i];
		s[i] = s[x];
		s[x] = tmp;
		i++;
		x--;
	}

}
