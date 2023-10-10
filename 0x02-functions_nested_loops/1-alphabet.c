#include "main.h"

/**
 * print_alphabet - This would print all alphabets
 *  in lowercase form
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
