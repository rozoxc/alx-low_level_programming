#include "main.h"
/**
 * print_line - print '_'
 * @n : number of '_'
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

