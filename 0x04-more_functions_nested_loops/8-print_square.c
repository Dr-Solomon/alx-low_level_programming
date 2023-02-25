#include "main.h"

/**
 * print_square - draws a square shape
 * @size:  square made of '#'
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < size; i++)
		{
			_putchar('#')
				;
			for (j = 2; j < size; j++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
