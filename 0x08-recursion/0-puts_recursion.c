#include "main.h"
/**
 * _puts_recursion - printsa string followed by a new line.
 * @s: pointer to sting.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
