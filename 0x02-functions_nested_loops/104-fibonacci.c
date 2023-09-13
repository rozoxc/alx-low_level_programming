#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int F[200];

	F[0] = 0;
	F[1] = 1;
	i = 2;
	while (i <= 99)
	{
		F[i] = F[i - 1] + F[i - 2];
		printf("%ld", F[i]);
		if (i != 99)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
