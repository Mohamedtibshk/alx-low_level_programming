#include <stdio.h>

/**
 * main - all combination of two digit using putchar only
 *
 * Description: prints all two whiles combos of the two digit
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
			if (y != x && y < x)
			{
		 		putchar(y + 48);
				putchar(x + 48);

				if (y + x != 17)
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
