#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 2000

void addStrings(char *num1, char *num2, char *result) {
int carry = 0;
int len1 = strlen(num1);
int len2 = strlen(num2);
int maxLen = (len1 > len2) ? len1 : len2;
for (int i = 0; i < maxLen; i++) {
int digit1 = (i < len1) ? (num1[len1 - 1 - i] - '0') : 0;
int digit2 = (i < len2) ? (num2[len2 - 1 - i] - '0') : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
result[maxLen - 1 - i] = (sum % 10) + '0';
}
if (carry)
result[0] = carry + '0';
}
/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
char fib1[MAX_DIGITS], fib2[MAX_DIGITS], next_fib[MAX_DIGITS];
memset(fib1, 0, sizeof(fib1));
memset(fib2, 0, sizeof(fib2));
memset(next_fib, 0, sizeof(next_fib));
strcpy(fib1, "1");
strcpy(fib2, "2");
printf("%s, %s, ", fib1, fib2);
for (int fib_count = 3; fib_count <= 98; fib_count++)
{
addStrings(fib1, fib2, next_fib);
strcpy(fib1, fib2);
strcpy(fib2, next_fib);
if (fib_count != 98)
printf("%s, ", next_fib);
else
printf("%s\n", next_fib);
}
return (0);
}
