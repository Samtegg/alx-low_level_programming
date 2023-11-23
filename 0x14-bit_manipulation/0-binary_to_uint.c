#include "main.h"
/**
 * binary_to_uint - this function converts a binary to an unsigned int
 * @b: binary numb as a string
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ddecimal = 0;
int dstr_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[dstr_len] != '\0')
dstr_len++;

while (dstr_len)
{
ddecimal += ((b[dstr_len - 1] - '0') * base);
base *= 2;
dstr_len--;
}
return (ddecimal);
}

/**
 * check_valid_string - this function checks if a string has only 0's and 1's
 * @b: the string to be checked
 *
 * Return: returns 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
