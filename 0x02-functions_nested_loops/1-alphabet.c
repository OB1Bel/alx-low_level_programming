#include "main.h"

/*
 * main - prints alphabets in lower case
 * Return :always 0 (Success)
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z' ; l++)
		_putchar(l);
	_putchar('\n');
}
