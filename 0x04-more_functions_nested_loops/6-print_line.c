#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line
 * @n: integer to print stuff?
 */

void print_line(int n)
{
	for (n-- > 0;)
	{
		putchar('_');
	}
	putchar('\n');
}
