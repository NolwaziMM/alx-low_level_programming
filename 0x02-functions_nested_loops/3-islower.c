#include "main.h"

/**
 *_islower - function that checks for lowercase charecter
 *@c: the charecter
 *Return: 1 if letter is lowecase, and 0 if not
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
