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
 * print_rev - reverse string
 * @s : string
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
