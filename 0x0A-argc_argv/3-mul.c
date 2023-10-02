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
	int i, p;

	i = 1;
	p = 1;
	while (i < argc)
	{
		p *= atoi(argv[i]);
		i++;
	}
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", p);
	return (0);
}
