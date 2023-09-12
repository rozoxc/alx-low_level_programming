#include "main.h"
/**
 * print_alphabet_x10 -print all lowercase alphabets 10time followed by newline
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 1;
	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
