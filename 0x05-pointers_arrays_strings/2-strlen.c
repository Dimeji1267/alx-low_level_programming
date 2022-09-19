#include <stdio.h>
#include <string.h>

/**
 * _strlen - Length
 * @s: string
 * Return: Length of string
 */

int _strlen(int *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (0);
}
