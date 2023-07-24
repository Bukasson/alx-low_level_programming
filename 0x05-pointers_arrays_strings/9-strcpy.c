#include "main.h"

/**
 * _strcpy - Copies the string pointed to by
 * src to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character until the null terminator is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the null terminator to the destination buffer */
	dest[i] = '\0';

	/* Return a pointer to the destination buffer */
	return (dest);
}
