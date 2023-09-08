#include <stdio.h>

/**
 * main - all combination of single digit using putchar only
 *
 * Description: prints all single combos of the single digit
 *              number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
		putchar(y + 48);

		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
		y++;
	}
	putchar('\n');

	return (0);
}	
