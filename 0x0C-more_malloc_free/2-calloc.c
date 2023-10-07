#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the number of arrays
 * @size: the size of array
 * Return: return ptr;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int a, i;

	a = nmemb * size;
	if (size == 0  || nmemb == 0)
		return (NULL);
	ptr = malloc(a);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < a)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
