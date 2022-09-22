#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (j = 0; i < n; j++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
