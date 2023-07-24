#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string (excluding the null terminator)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start = (length + 1) / 2; /* Start index for printing */

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
