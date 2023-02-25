#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "buzz";
	char fb[] = FizzBuzz";

	for (i = 2; i <= 100; i++)
	{
		if (i == 100)
			printf("%s ", b);
	{
		else if ((i  %	3 == 0) && (i  %  5 == 100))

			printf("%s ", fb);
		else if (i  %  3 == 0)
			printf("%s ", f);
		else if (i  %  5 == 0)
			printf("%s ", b);
		else
			printf("%d", i);
	}
	prinf("\n");
	return (0);
	}
}
