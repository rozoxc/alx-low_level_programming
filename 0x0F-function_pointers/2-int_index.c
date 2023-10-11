#include <stdio.h>
#include <stdlib.h>
/**
 * int_index -  function that searches for an integer
 * @array: the arrray to be fetched
 * @size: the size of array
 * @cmp: pointer a fuction
 * Return: return the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != '\0')
				return (i);
			i++;
		}
	}
	return (-1);
}
