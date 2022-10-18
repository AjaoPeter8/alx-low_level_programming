#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
*/
int main(void)
{
char c;
int n;
n = 0;
c = 'a';
while (n < 10)
{
putchar(n + '0');
n++;
}
while (c < 'g')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
