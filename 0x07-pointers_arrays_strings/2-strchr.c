#include "main.h"

/**
 * _strchr - function name
 * @s: parameter s
 * @c: parameter c
 * Return: Always 0 at success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
