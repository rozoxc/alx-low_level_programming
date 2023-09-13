#include "main.h"
/**
 * _print_space - Print spaces.
 *
 * This function prints a specified number of spaces.
 */

void _print_space(void)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 * _print_number - Print a number.
 *
 * This function prints an integer number.
 *
 * @n: The number to be printed.
 */

void _print_number(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
/**
 * _condition - set condition
 * this function compare to number a ,b
 * @a : the numbers who be compared
 * @b : the numbers who be compared
 */

void _condition(int a, int b)
{
	if (a != b)
		_putchar(',');
}
/**
 * print_times_table - Print the times table for a number.
 *
 * This function takes an integer 'n' as input and prints the times table
 * for that number from 1 to 10.
 *
 * @n: The number for which to print the times table.
 */
void print_times_table(int n)
{
	int i, j, a, c;

	i = 0;
	if (n < 15 && n >= 0)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				a = i * j;
				if (j != 0 && a < 10)
				{
					_print_space();
				}
				if (a >= 10)
				{
					_putchar(' ');
					if (a >= 100)
					{
						c = a / 10;
						_print_number(c);
						_putchar(a % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_print_number(a);
					}
				}
				else
					_putchar(a + '0');
				_condition(j, n);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
