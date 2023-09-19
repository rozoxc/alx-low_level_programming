#include <stdio.h>
#include "main.h"
/**
 * print_array - function who print array
 * @a: the array
 * @n: the order of this array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
