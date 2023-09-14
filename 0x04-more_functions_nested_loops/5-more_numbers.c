#include "main.h"
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
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
		i++;
	}
}
