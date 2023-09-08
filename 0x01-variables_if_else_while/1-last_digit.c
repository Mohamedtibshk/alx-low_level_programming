#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit identfing
 *
 * Description: shows the status of the number according to it's last digit
 *
 * Result: Always 0 (Success)
*/
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	if (y > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, y);
	else if (y == 0)
		printf("last digit of %i is %i and is 0\n", n, y);
	else if (y < 6 && y!=0)
		printf("last digit of %i is %i and is less of 6 and not 0\n", n, y);
	return (0);
}
