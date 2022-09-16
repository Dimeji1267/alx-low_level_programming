#include "main.h"
/**
 * _isupper - checks if a character is uppercase or not
 * @c: Description for c
 * Return: 0. Success
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}

	return (0);
}
