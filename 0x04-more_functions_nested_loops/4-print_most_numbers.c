#include "main.h"

/**
 * print_most_numbers - prints 1-9 omitting 2 and 4
 * Return: void
*/

void print_most_numbers(void)
{
char c;
c = '0';
for (c = '0'; c < '10'; c++)
{
if (!(c == '2') || (c == '4'))
_putchar(c);
}
_putchar('\n');
}
