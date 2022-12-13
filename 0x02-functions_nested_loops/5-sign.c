#include "main.h"

/**
 * print_sign - prints the sign of the number
 *@n: charecter
 * Return: 1 if n is greater than one, 0 if n is zero, -1 if n is less than one
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
