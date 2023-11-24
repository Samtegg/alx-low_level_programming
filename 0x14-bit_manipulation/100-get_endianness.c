#include "main.h"

/**
 * get_endianness - this program checks the endianness
 *
 * Return: returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int da;
	char *db;

	da = 1;
	db = (char *)&da;
	return (*db);
}
