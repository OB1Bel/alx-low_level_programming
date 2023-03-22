#include "main.h"
/**
 * jack_bauer - prints 24hrs time
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int i;

	for (h = 0; h < 24; h++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar (h / 10 + '0');
			_putchar (h % 10 + '0');
			_putchar(':');
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar('\n');
		}
	}
}
