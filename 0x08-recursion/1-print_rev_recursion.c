#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	is (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
