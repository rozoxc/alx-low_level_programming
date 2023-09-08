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
	char numb, alphab;

	numb = '0';
	while (numb <= '9')
	{
		putchar(numb);
		numb++;
	}
	alphab = 'a';
	while (alphab <= 'f')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');
	return (0);

}
