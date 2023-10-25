#include "main.h"

/**
  * factorial - the main function 
  *
  * @n: the function's parameter
  *
  * Return: the function n.
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
