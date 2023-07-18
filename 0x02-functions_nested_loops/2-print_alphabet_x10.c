#include "main.h"
/**
 * print_alphabet_x10 - Prints the English alphabet in lowercase.
 *
 * Description:
 * This function prints the English alphabet in lowercase to the std output.
 * It starts from 'a' and continues up to 'z'.
 * Each letter is separated by a space.
 * it is repeated nine more times,
 * and the sequence is terminated by a newline character.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
		}
	_putchar('\n');
	}
}
