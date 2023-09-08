#include <stdio.h>

/**
 * main - printing alpha in lower on reverse
 *
 * Description: use while to go through then  
 *              putchar the result
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 'z';

	while (y <= 'a')
	{
		putchar(y);
		y--;
	}
	putchar('\n');

	return (0);
}	
