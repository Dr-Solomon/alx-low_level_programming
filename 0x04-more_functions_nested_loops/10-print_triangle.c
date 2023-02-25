#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of a tringle
 */
void print_triangle(int n)
{
	int a, tri;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (tri = n - a; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < a; tri++)
				_putchar('#');
			if (a == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}


