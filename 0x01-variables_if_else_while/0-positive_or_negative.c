#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks whether int n is positive, negative or zero
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if( n > 0 ) {
printf("%d is positive\n", n);
} else if( n == 0 ) {
printf("%d is zero", n);
} else {
printf("%d is negative", n);
}
return (0);
}