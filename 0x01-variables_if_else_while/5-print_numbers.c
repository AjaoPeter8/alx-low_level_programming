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
while (n < 10)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
