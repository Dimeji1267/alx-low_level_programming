#include <stdio.h>
#include <unistd.h>

/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
	if (c != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
