#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	prinf("1");
	for (i = 2; i <= 100; i++)
	{
		prinf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
	}
	prinf("\n");
	return (0);

