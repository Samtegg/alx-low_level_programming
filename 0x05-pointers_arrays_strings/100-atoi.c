#include "main.h"

/**
 * _atoi - this converts string to integer.
 * @s: string to be converted.
 *
 * Return: integer converted from the string, or 0 if conversion fails.
 */
int _atoi(char *s)
{
	int index, negative, num, length, digit, foundDigit;

	index = 0;
	negative = 0;
	num = 0;
	length = 0;
	digit = 0;
	foundDigit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && !foundDigit)
	{
		if (s[index] == '-')
			negative++;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (negative % 2)
				digit = -digit;
			num = num * 10 + digit;
			foundDigit = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			foundDigit = 0;
		}
		index++;
	}

	if (!foundDigit)
		return (0);

	return (num);
}
