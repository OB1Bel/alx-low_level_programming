#include <stdio.h>

/**
 * main - main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n, o;

	for (m = 48; m < 58; m++)
	{
		for (n = 49; n < 58; n++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m == 55 || m == 56)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
