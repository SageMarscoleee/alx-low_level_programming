#include "main.h"

/**
 * _islower - Checks for lower case
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
