#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse order
 * Return: 0
*/
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
