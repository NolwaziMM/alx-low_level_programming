#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets both lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= '0')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}

	putchar('\n');
	return (0);
}
