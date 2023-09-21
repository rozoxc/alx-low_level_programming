#include <stdio.h>
/**
 * _strcmp - function compare two string
 * @s1: first string
 * @s2: seconde string
 *
 * Return: return the soustraction
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (0);
	return (0);
}
