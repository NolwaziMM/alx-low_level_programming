#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 10)
		ld *= -1;
	_putchar(ld + '0');

	return (0);
}
