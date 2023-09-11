#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98)
			{
				putchar(',');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

