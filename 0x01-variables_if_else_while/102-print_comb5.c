#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0, b = 1, amax = 98, bmax = 99;

	while (a <= amax)
	{
		b = a + 1;
	while (b <= bmax)
	{
		putchar(a < 9 ? 0 + '0' : (a / 10) + '0');
		putchar(a < 9 ? a + '0' : (a % 10) + '0');
		putchar(' ');
		putchar(b < 9 ? 0 + '0' : (b / 10) + '0');
		putchar(b < 9 ? b + '0' : (b % 10) + '0');

		if (a != amax)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
	}
	putchar('\n');

	return (0);
}
