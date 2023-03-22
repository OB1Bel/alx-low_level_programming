#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int n, m, l, k, j;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			l = n * m;
			if (l > 9)
			{
				k = l % 10;
				j = (l - k) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(j + '0');
				_putchar(k + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(l + '0');
			}
		}
	_putchar('\n');
	}
}

