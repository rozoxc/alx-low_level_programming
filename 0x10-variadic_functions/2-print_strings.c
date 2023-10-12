#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *s;

	va_start(a, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(a, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
