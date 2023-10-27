#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int b;

	if (!n)
	{
		_putchar('0');
		return;
	}
	b = 0;
	tmp = n;
	while (tmp)
	{
		tmp >>= 1;
		b++;
	}
	b -= 1;
	while (b >= 0)
	{
		if ((n >> b) & 1)
			_putchar('1');
		else
			_putchar('0');
		b--;
	}
}
