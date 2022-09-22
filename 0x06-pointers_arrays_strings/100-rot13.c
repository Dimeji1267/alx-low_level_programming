#include "main.h"
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEgGhHiIjJkKlLmM";

	for (i = 0; *(s + i); i++)
	{

		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}

