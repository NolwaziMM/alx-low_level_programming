#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 10)
		n = -n;
	ld = n % 10;
	_putchar(ld + '0');

	return (ld);
}
