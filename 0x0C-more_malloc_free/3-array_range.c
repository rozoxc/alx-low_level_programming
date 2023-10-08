#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: min of integers
 * @max: max of integers
 * Return: return the array of integers
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(int) * (max + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
