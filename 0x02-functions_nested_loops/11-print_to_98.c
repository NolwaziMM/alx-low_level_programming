#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d/n", 98);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d/n", 98);
	}
}
