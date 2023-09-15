#include "main.h"
/**
 * print_square - print # each line depend to the size
 * @size : number of # of each line and column
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
