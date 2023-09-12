#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - print all lowercase alphabets followed by newline
 */

void  print_alphabet(void)
{
	char charater = 'a';

	while (charater <= 'z')
	{
		_putchar(charater);
		charater++;
	}
	putchar('\n');
}
