#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
  * first - this would print a sentence before the
  * main function is being passed.
  *
  * Return: it reurns Nothing.
  */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
