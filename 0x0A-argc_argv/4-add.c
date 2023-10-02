#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			return (1);
		j += atoi(argv[i]);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
