#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of trinagle
 * Return: void
*/

void print_triangle(int size)
{
	int i, space, hash;
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1; i <= size; i++)
			{
				for (space = size - i; space >= 1; space--)
				{
					_putchar(' ');
				}
				for (hash = 1; hash <= i; hash++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
}
