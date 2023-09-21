#include <stdio.h>
/**
 * reverse_array - function reverse integers
 * @a: the array
 * @n: the size
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

}
