#include <stdio.h>

/**
 * main - main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
