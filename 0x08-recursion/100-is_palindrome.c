#include "main.h"
/**
 * _lenght - function return the size of strin
 *  @str : stringi
 *
 *  Return: return integers
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
 * is_palindrome -function that returns 1 if S is a palindrome and 0 if not
 *@s: the string
 *Return: return 1 or 0 depenf to the condition
 */

int is_palindrome(char *s)
{
	int i, j, a;

	i = 0;
	a = 1;
	j = _lenght(s) - 1;
	while (i <= (j / 2))
	{
		if (s[i] == s[j])
		{
			a *= 1;
		}
		else
			return (0);
		i++;
		j--;
	}
	return (a);
}
