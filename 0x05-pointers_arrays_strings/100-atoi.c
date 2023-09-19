#include <stdio.h>
/**
 * _atoi -  It seem the atoi function
 * @s: teh string
 * Return: return the integers
 */

int _atoi(char *s)
{
	unsigned int i, a, c;

	i = 0;
	a = 1;
	c = 0;
	if (s[i] != '\0')
	{
		while (s[i] >=  58 || s[i] <= 47)
		{
			if (s[i] == 45)
				a *= -1;
			i++;
		}
		if (s[i] >= '0' && s[i]  <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				c = c * 10 + (s[i] - 48);
				i++;
			}
			return (c * a);
		}
		else
			return (0);
	}
	return (0);

}
