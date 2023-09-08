#include <stdio.h>

/**
 * main - printing single digits
 *
 * Description: prints all single digits from the
 *              base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
		printf("%i", y);
		y++;
	}
	printf("\n");

	return (0);
}
