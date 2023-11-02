#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    /* Print the first element of the argv array, which is the program name. */
    printf("%s\n", argv[0]);

    return (0);
}
