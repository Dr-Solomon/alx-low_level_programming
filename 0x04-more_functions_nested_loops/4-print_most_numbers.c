#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9
 * without 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int y = 0;

	while (y < 10)
	{
		if (y != 2 && y != 4)
			_putchar(y + '0');

		y++;
	}
	_putchar('\n');
}
