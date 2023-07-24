#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * getRandomChar - Generates a random character.
 *
 * Return: The randomly generated character.
 */
char getRandomChar() {
	/* Customize this function to generate random characters based on the validation criteria */
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);
	return charset[index];
}

/**
 * generateRandomPassword - Generates a random password.
 * @password: Pointer to store the generated password.
 * @length: The length of the password to be generated.
 */
void generateRandomPassword(char *password, int length) {
	int i;
	for (i = 0; i < length; i++) {
		password[i] = getRandomChar();
	}
	password[length] = '\0'; /* Null-terminate the password string */
}

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void) {
	srand(time(NULL)); /* Seed the random number generator with the current time */

	int passwordLength = 10; /* Set the desired password length */

	char password[passwordLength + 1]; /* +1 for null terminator */

	generateRandomPassword(password, passwordLength);
	printf("Random Password: %s\n", password);

	return 0;
}
