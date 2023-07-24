#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	/* Skip leading spaces */
	while (s[i] == ' ')
		i++;

	/* Check for a sign (+/-) */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the numeric characters to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			/* Handle overflow */
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		num = num * 10 + (s[i] - '0');
		i++;
	}

	/* Apply the sign to the final integer */
	return sign * num;
}
