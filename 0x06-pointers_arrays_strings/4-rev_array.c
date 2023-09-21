#include <stdio.h>
/**
 * reverse_array - function reverse integers
 * @a: the array
 * @n: the size
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");

}
