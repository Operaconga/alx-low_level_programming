#include "main.h"
/**
 * print_alphabet_x10 - print all alphbets ten times
 *
 * Return: void
 */
int print_alphabet_x10(void)
{
	char counter, lower;

	for (counter = '0'; counter <= '9'; counter++)
	{
		for (lower = 'a'; lower <='z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
