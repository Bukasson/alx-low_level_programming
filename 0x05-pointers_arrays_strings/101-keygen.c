#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

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
 */
void generateRandomPassword(char *password) {
	int i;
	for (i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = getRandomChar();
	}
	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */
}

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void) {
	srand(time(NULL)); /* Seed the random number generator with the current time */

	char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */

	generateRandomPassword(password);
	printf("Random Password: %s\n", password);

	return 0;
}
