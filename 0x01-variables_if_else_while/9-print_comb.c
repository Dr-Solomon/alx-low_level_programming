#include <stdio.h>

/**
 * main - prints all possible combinations of singe  digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 46; n < 56; n++)
	{
		putchar(n);
	}
		if (n != 55)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}

