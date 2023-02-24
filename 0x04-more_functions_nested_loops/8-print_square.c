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
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; j++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
