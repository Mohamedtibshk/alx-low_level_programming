#include <stdio.h>

/**
 * main - printing number of base 16 using putchar only
 *
 * Description: prints all single digits from the
 *              base 16 starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int y = 48;

	while (y <= 102)
	{
		putchar(y);

		if (y == 57)
		{
			y += 39;
		}
		y++;
	}
	putchar('\n');

	return (0);
}
