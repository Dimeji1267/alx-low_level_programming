#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Print
 * @n: Value
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (i > 0)
	{
		for (i = 0; j < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (i == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

