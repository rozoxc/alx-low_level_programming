#include "main.h"
/**
 * _islower - check if the character is lowercase or not
 * @c: the character as argument
 * Return: 1 if the character is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
