#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: argument taht will be take
 * Return: return sum of all argumnent
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	va_start(a, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(a, int);
		i++;
	}
	va_end(a);
	return (sum);
}
