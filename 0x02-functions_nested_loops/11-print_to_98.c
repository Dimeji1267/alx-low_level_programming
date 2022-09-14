#include <stdio.h>

/**
 * print_to__98 - Prints all natural numbers from input to 98.
 * seperated by comma, followed
 * by space and number should be
 * printed in order.
 * @n: The number to begin counting at 0.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d,", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d\n", n);
	}
}
