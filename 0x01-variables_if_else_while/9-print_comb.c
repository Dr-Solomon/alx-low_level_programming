#include <stdio.h>

/**
 * main - prints all possible combinations of singe  digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n);
	}
		if (n != 8)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}

