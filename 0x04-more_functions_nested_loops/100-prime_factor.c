#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n;
	int larg_factor;

	n = 612852475143;
	larg_factor = 2;
	while (n > 1)
	{
		if (n % larg_factor == 0)
		{
			n = n / larg_factor;
		}
		else
			larg_factor++;
	}
	printf("%ld \n", n);
	return (0);

}
