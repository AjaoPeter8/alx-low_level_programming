#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print alphabet in lower case omitting q and e
 * Return: 0
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if ((c != 'q' && c != 'e') && (c <= 'z'))
putchar(c);
c++;
}
putchar('\n');
return (0);
}
