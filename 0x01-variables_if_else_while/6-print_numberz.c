#include <stdio.h>
#include <unistd.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
{
	putchar(a + '0');
}
	putchar('\n');
	return (0);
}
