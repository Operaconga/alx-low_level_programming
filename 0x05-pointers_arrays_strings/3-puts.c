#include "main.h"

/**
 *_puts - prints a string and followed by a new line to stdout
 *@str is the parameter
 */
void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}