#include "main.h"

/**
 * times_table - function print table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		result = i * j;
	if (j == 0)
	{
	_putchar("%d, ", result);
	}
	else
	{
	_putchar("%2d ", result);
		if (j != 9)
		_putchar(", ");
		}
		_putchar("\n");
	}
	}
}
