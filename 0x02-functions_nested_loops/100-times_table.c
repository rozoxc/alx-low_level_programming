#include "main.h"
#include <stdlib.h>

void print_times_table(int n)
{
	int i, j, a, c;

	i = 0;
	if (n < 15 && n > 0)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				a = i * j;
				if (j != 0 && a < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (a >= 10)
				{
					_putchar(' ');
					if (a >= 100)
					{
						c = a / 10;
						_putchar(c / 10 + '0');
						_putchar(c % 10 + '0');
						_putchar(a % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(a / 10 + '0');
						_putchar(a % 10 + '0');
					}
				}
				else
					_putchar(a + '0');
				if (j != n)
				{
					_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
