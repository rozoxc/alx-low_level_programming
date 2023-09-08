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
	int a, b, c;

	a = 0;
	c = 0;
	while (a <= 8)
	{
		b = c + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
		if (a != 8)
		{
			putchar(',');
			putchar(' ');
		}
			b++;
		}
		c++;
		a++;
	}
	putchar('\n');
	return (0);
}
