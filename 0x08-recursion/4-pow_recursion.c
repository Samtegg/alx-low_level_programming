#include "main.h"
/**
  * _pow_recursion - the function's name
  * @x: this is parameter 1
  * @y: this is parameter 2
  * Return: it returns the value of a
  * num passed to the function
  */


int _pow_recursion(int x, int y)
{

if (y < 0)
        return (-1);

else if (y == 0)
        return (1);

else
        return (x * _pow_recursion(x, (y - 1)));

return (0);
}
