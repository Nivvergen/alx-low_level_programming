#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: input character
 * Return: 1 if it is a (0 to 9), 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
