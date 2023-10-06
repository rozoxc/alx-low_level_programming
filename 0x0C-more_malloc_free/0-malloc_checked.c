#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: the contain of malloc function
 * Return: return ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == INT_MAX)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
