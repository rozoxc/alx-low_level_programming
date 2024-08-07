#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array of integers
 * @array: is a pointer to the first element
 * @size:  is the number of elements in array
 * @value:  is the value to search
 * Return:  return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d] \n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
