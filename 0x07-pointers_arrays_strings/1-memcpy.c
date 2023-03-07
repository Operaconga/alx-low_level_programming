#include "main.h"

/**
 *_memcpy copies memory area
 *@dest is where memory arear is copied to
 *@src is where momory area copied from
 *@n is a copied bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		*(dest + i) = * *(src + i);
		i++;
	}
	return (dest);
}
