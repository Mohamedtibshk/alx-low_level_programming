#include "main.h"
#include <stdio.h>

/**
*_puts - function that prints a string
* @str: string to be printed
* Return: void
*/

void _puts(char *str)
{
	int i;

for (i = 0 ; str[i] != '\0' ; i++)
{
		printf("%d", str[i]);
	printf("\n");
}
}
