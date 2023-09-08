#include <stdio.h>

/**
 * main - all combination of two two-digit using putchar only
 *
 * Description: prints all two whiles combos of two two-digit
 *              number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int y = 0;
	int x;

	while (y <= 9)
	{
		int x = y;

		while (x <= 99)
		{
			if (x != y)
			{
		 		putchar((y / 10) + 48);
		 		putchar((y % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);

				if (y != 98 && x != 99)
				{
					putchar(',');
					putchar(' ');
				} 
			}
			x++;
		}
		y++;
	}
	putchar('\n');

	return (0);
}
