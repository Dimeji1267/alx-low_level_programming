#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints 3 combination of numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, l;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (i = '0' ; i <= '9' ; i++)
		{
			for (l = '0' ; l <= '9' ; l++)
			{
				if (c < i && i < l)
				{
					putchar(c);
					putchar(i);
					putchar(l);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
