#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints 0-9
 * Return: 0
*/
int main(void)
{
char n;
n = 0;
for (n = 0, n < 10, n++)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
