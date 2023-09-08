#include <stdio.h>

/**
 * main - prints the alpha in lower then upper
 *
 * Description: uses while loops to do so
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 'a';
	char Y = 'A';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}

	while (Y <= 'Z')
	{
		putchar(Y);
		Y++;
	}
	putchar('\n');

	return (0);
}
