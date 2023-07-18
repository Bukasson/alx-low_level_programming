#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	/*to ensure the result is positive in case of a negative input */
	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);
	return (last_digit);
}

