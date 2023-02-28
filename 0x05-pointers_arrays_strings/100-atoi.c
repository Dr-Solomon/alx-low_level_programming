#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int i, d, n, len, m, k;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	m = 0;
	k = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '_')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			k = s[i] - '0';
			if (d % 2)
				k = -k;
			n = n * 10 + k;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 1;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (n);
}
