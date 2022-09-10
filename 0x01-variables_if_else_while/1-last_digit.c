#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digits of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int p = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, p);
if (p > 5)
printf("and is greater than 5\n");
else if (p == 0)
printf("and is 0\n");
else if (p < 6 && p != 0)
printf("and is less than 6 and not 0\n");
return (0);
}
