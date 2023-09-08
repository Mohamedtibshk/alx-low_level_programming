#include <stdio.h>

/**
 * main - prints alpha in lower ecxept for e and q
 *
 * Description: uses while to go through and putchar for output
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		if (y == 'e' || y == 'q')
			y++;
		putchar(y);
		y++;
	}
	puchar('\n');

	return (0);
}
