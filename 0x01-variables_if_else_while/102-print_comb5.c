#include <stdio.h>

/**
 * main - main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 98; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);
			putchar(' ');
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);

			if (m == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
