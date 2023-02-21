#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char j = 'a';
	int i = 0;

		for (i = 0; i < 10; i++)
		{

			for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
}
