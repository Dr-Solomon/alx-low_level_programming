#include "main.h"

/**
 * print_square - draws a square shape
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i < size; i++)
		{
			_putchar('#');
			for (j = 2; j < size; j++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
