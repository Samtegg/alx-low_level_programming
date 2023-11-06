#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * This function prints the name of the 
 * current source file to the standard output.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
    printf("%s\n", __FILE__);  /* Print the name of 
				  the current source file */
    return (0);
}

