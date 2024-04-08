#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - function that searches for a value in an array of integers
 * @array :  is a pointer to the first element of the array to search in
 * @size :  is the number of elements in array
 * @value : is the value to search for
 * Return: the index of the value found, Otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL || size != 0)
	{
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
