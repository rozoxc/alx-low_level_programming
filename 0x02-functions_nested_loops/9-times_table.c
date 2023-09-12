#include "main.h"
/**
 * times_table - Prints the multiplication table for 0 to 9.
 *
 * Description: This function prints the multiplication table for numbers
 *              from 0 to 9 in a well-formatted manner.
 */
void times_table(void)
{
	int i, j, a;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			a = i * j;
			if (a >= 10)
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			else
			{
				_putchar(a + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
