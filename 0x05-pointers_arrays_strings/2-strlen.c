#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Returns: Always 0 (success)
 */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}
