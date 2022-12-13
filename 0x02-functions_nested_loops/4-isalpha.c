#include "main.h"

/**
 *_isalpha - function checks for alphabetic charecter
 *@c: charecter
 * Return: returns 1 if charecter is a letter, and 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
