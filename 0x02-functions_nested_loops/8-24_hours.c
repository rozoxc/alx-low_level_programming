#include "main.h"
/**
 * jack_bauer - prints the hours and minutes of a 24-hour clock
 */

void jack_bauer(void)
{
	int a, b;

	a = 0;
	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
