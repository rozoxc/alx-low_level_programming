#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator, *str;
	int i;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		if (i > 0)
			separator = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

