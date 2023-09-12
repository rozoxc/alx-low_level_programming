#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[] = "putchar";
	int i = 0;

	_putchar('_');
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
