#include <stdio.h>

/**
 * main - all differnet combination of three digit using putchar only
 *
 * Description: prints all three whiles combos of the three digit
 *              number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
		int x = 0;

		while (x <= 9)
		{
			int z = 0;

			while (z <= 9)
			{
				if (y != x && y < x && x != z && x < z)
				{
		 			putchar(y + 48);
					putchar(x + 48);
					putchar(z + 48);

					if (y + x + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			x++;
		}
		y++;
	}
	putchar('\n');

	return (0);
}
