#include "main.h"
/**
 * _strspn - locates a character in a string
 * @s: pointer to a char, string that will be checked
 * @accept: pointer to the substring we check for
 *
 * Return: unsigned int, length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (count);
}
