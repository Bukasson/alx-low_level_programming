#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
int count = 0;
long int fib1 = 1, fib2 = 2, next_fib;

while (count < 50)
{
if (count == 49)
printf("%ld\n", fib1);
else
printf("%ld, ", fib1);

next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;

count++;
}

return (0);
}
