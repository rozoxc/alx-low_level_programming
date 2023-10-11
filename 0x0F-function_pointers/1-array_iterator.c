#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator -  function that executes a function
 * @size: the size of the array
 * @array: the array
 * @action: pointer a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
