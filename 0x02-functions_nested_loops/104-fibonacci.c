#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
int count, fib_count;
unsigned long int fib1 = 1, fib2 = 2, next_fib;

printf("%lu, %lu, ", fib1, fib2);

for (count = 3; count <= 98; count++)
{
next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;

if (count != 98)
printf("%lu, ", next_fib);
else
printf("%lu\n", next_fib);
}

return (0);
}
