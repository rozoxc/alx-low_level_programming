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
