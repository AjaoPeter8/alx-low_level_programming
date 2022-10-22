#include "main.h"
#include <stdio.h>
/**
 * main - filter number and words
 * Return: 0
*/

int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0)
printf("Fizz");
else
printf("%i", i);
if (i <= 100)
printf(" ");
}
printf("\n");
return (0);
}
