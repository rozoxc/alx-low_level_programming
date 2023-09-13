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
	while (i <= 51)
	{
		F[i] = F[i - 1] + F[i - 2];
		printf("%ld", F[i]);
		if (i != 51)
		{
			printf(" ,");
		}
		i++;
	}
	i = 2;
	printf("\n");
	return (0);
}
