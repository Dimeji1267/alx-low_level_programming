#include "main.h"
/**
 * print_number - prints number
 * @n: integer to convert to character
 */
void print_number(int n)
{
	unsigned int abs;
	int mult = 1;
	unsigned int abScount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abScount = n;

	while (abScount > 0)
	{
		abScount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult) + '0');
		abs % mult;
		mult /= 10;
	}
}
