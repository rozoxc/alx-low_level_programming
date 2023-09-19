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
 * puts_half - function print half string
 * @str: the string
 */

void puts_half(char *str)
{
	int i, x;

	i = 0;
	if (_strlen(str) % 2 == 0)
	{
		x = _strlen(str)  / 2;
		while (str[i] != '\0')
		{
			if (i >= x)
				_putchar(str[i]);
			i++;

		}
	}
	else if (_strlen(str) % 2 != 0)
	{
		x = (_strlen(str) / 2) - 1;
		while (str[i] != '\0')
		{
			if (i > x)
				_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
