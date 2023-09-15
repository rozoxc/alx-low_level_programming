#include "main.h"
/**
 * print_triangle - print tringle whit #
 * @size :  number of lines and columns
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			k = 1;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
