#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
int fib_count;
unsigned long int fib1 = 1, fib2 = 2, next_fib;

printf("%lu, %lu, ", fib1, fib2);

for (fib_count = 3; fib_count <= 98; fib_count++)
{
next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;

if (fib_count != 98)
printf("%lu, ", next_fib);
else
printf("%lu\n", next_fib);
}

return (0);
}
