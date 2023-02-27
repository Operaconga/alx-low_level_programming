#include "main.h"

/**
 * print_rev  - check the string in reverse followed by new line
 *@s is the parameter
 */

void print_rev(char *s);
{
	int c;

	for (c =0; s[c] !=0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
		_putchar('\n');
	}
