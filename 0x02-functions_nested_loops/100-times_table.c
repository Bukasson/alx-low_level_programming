#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number specifying the times table (0 to 98).
 */
void print_times_table(int n)
{
	int i, j, result;
if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;

if (j != 0)
{
printf(", ");
if (result < 100)
putchar(' ');
if (result < 10)
putchar(' ');
}
printf("%d", result);
}
putchar('\n');
}
}

