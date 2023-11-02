#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if there are only digits in a string.
 * @str: The input string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	/* Declare variables */
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* Count the string length */
	{
		if (!isdigit(str[count)) /* Check if the string contains digits */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the sum of valid integer arguments.
 * @argc: The count of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	/* Declare variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* Iterate through the entire array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count); /* Convert string to integer using ATOI */
			sum += str_to_int;
		}
		/* Condition for non-digit symbols in one of the numbers */
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* Print the sum */
	return (0);
}
