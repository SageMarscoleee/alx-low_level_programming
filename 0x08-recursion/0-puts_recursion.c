#include "main.h"

/**
* Write a function that prints a string
* Return 0
*/
void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0');
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[n]);
		_puts_recursion(s + 1);
	}
}
