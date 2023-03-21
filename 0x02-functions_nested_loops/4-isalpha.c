#include "main.h"

/**
 * _isalpha - checks if c is an alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if it is character and 0 othewise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
