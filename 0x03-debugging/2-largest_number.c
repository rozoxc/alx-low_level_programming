#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		if (b > c)
			largest = c;
		else
			largest = b;
	}
	else if (b > a && b > c)
	{
		if (a > c)
			largest = c
		else
			largest = a;
	}
	else if (c > a && c > b)
	{
		if (a > b)
			largest = b;
		else
			largest = a;
	}

	return (largest);
}

