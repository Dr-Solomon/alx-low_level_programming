#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
{
	int count = 0;
	char j;

		while (count++ <= 9)
		{

			for (j = 'a'; j <= 'z'; j++)
				_putchar(j);
		}		_putchar('\n');
}
