#include <stdio.h>
/**
 * _atoi -  It seem the atoi function
 * @s: teh string
 * Return: return the integers
 */

int _atoi(char *s)
{
	unsigned long int i, a, c;

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
		if (s[i] >= 48 && s[i]  <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				c += (s[i] - 48);
				c *= 10;
				i++;
			}
			c /= 10;
			return (c * a);
		}
		else
			return (0);
	}
	return (0);

}
