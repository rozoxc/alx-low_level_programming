#include "main.h"
/**
 * _islower - check if the character is lowercase or not
 * @c: the character as argument
 * Return: 1 if the character is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 65  && c <= 90)
	{
		return (0);
	}
	else
		return (1);
}
