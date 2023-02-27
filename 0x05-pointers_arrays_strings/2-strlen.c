#include "main.h"

/**
 * _strlen -> finds string length
 * @s: string pointer to be passed to the fuction
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s++;
	}
	return (len);
}
