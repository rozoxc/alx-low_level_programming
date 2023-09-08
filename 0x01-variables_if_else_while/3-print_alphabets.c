#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet, M;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	M = 'A';
	while (M <= 'Z')
	{
		putchar(M);
		M++;
	}
	putchar('\n');
	return (0);
}
