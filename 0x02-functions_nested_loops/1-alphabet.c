#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/* function declaration */
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
