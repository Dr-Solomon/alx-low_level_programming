#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *  @c: Variable text
 *  Return: Always 0
 *
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase >= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
		isupper = 1;
		break;
	}
		return (isupper);
	}
}
