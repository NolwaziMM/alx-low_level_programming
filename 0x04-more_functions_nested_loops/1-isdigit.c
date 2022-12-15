#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
