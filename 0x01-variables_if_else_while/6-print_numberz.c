#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints 0-9
 * Return: 0
*/
int main(void)
{
int n;
n = 0;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
