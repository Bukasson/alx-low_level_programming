#include "main.h"
/**
 * print_alphabet - Prints the English alphabet in lowercase.
 *
 * Description:
 * The function prints the English alphabet in lowercase to the std output.
 * It starts from 'a' and continues up to 'z'.
 * Each letter is separated by a space
 * and the sequence is terminated by a newline character.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
