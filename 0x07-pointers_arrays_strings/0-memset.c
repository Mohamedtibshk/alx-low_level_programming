#include "main.h"

/**
 * _memset - fill a block of memory with specific value
 * @s: parameter c
 * @b: parameter b
 * @n: parameter n
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
		return (s);
	}
}

