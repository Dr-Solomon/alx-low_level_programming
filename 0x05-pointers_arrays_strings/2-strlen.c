#include "main.h"

/**
 * _strlen -> finds string length
 * @s: string pointer to be passed to the fuction
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
