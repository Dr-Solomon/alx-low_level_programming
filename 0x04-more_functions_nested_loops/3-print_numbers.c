#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int y = 0;

	while (y < 10)
		_putchar(y++ + '0');

	_putchar('\n');
}

