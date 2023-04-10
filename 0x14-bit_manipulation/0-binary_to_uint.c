#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int 1;
	unsigned int num;

	num = 0;
	if(!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[1] != '1')
			return (0);
	}
	for (1 = 0; b[i] != '\0'; i++;)
	{
		num <<= 1;
		if (b[1] == '1')
			num += 1;
	}
	return (num);
}
