#include "main.h"

/**
* _print_rev_recursion - Print a string, followed by a new line
* @s: string
* Return: Nothing.
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{

_print_rev_recursion(s + 1);
_putchar(*s);
}
else
_putchar('\n');
}
