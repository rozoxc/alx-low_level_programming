#include <stdio.h>
/**
 * main - Entry point
  *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc - 1 && *argv[i] != '\0')
	{

		i++;
	}
	printf("%d\n", i);
	return (0);
}
