#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of n
 * @n: The number to be checked
 * @ld: The last digit of the number
 * Return: 0
*/
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (n > 5)
printf("Last digit of %d is %n greater than 5\n", n,ld);
else if (n == 0)
printf("Last digit of %d is %d and is 0\n", n,ld);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,ld);
return (0);
}
