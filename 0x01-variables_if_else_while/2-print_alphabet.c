#include <stdio.h>

/**
 * main - prints the alpha in lower
 *
 * Description: uses while loop to do so
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
