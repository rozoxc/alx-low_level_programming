#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int F[50];

	F[0] = 0;
	F[1] = 1;
	i = 2;
	while (i <= 50)
	{
		F[i] = F[i - 1] + F[i - 2];
		i++;
	}
	i = 0;
	while (i <= 49)
	{
		printf("%ld", F[i]);
		if (i != 49)
		{
			printf(" ,");
		}
		printf("\n");
		i++;
	}
	return (0);
}
