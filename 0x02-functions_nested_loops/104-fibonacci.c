#include <stdio.h>

#define MAX_DIGITS 500

void addArrays(int *num1, int *num2, int *result) {
int carry = 0;
for (int i = 0; i < MAX_DIGITS; i++) {
int sum = num1[i] + num2[i] + carry;
result[i] = sum % 10;
carry = sum / 10;
}
}

int main(void) {
int fib1[MAX_DIGITS] = {0}, fib2[MAX_DIGITS] = {0}, next_fib[MAX_DIGITS] = {0};

fib1[MAX_DIGITS - 1] = 1;
fib2[MAX_DIGITS - 1] = 2;

printf("%d", fib1[MAX_DIGITS - 1]);
for (int i = MAX_DIGITS - 2; i >= 0; i--)
printf("%d", fib1[i]);
printf(", %d", fib2[MAX_DIGITS - 1]);
for (int i = MAX_DIGITS - 2; i >= 0; i--)
printf("%d", fib2[i]);
printf(", ");

int fib_count;
for (fib_count = 3; fib_count <= 98; fib_count++) {
addArrays(fib1, fib2, next_fib);

// Shift arrays for the next iteration
for (int i = 0; i < MAX_DIGITS; i++) {
fib1[i] = fib2[i];
fib2[i] = next_fib[i];
}

// Find the first non-zero digit to start printing
int start_printing = 0;
while (start_printing < MAX_DIGITS && next_fib[start_printing] == 0)
start_printing++;

// Print the next Fibonacci number
printf("%d", next_fib[MAX_DIGITS - 1 - start_printing]);
for (int i = MAX_DIGITS - 2 - start_printing; i >= 0; i--)
printf("%d", next_fib[i]);

if (fib_count != 98)
printf(", ");
else
printf("\n");
}

return 0;
}
