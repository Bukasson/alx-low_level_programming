#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, next_fib, sum = 0;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
sum += fib1;

next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}

printf("%ld\n", sum);

return (0);
}
