#include <stdio.h>
/**
 * swap_int - swap integers value
 * @a : first integers
 * @b : second integers
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	 *b = c;
}
