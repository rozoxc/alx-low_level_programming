#include "main.h"
/**
 * _new_line - print space
 */
void _new_line(void)
{
	_putchar('\n');
}
/**
 * more_numbers - print numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int num, i;

	i = 1;
	while (i <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
				_putchar(num + '0');
			num++;
		}
		_new_line();
		i++;
	}
}
