#include <stdio.h>
#include <main.h>

/**
 * author : Abdelkader
 *
 * converts a binary number to an unsigned int
 * Return: the converted number,, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 *
 * return: always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(binary);

	for (int i = 0; i < length; i++)
	{
		unit <<= 1;
		if (binary[i] == '1' ) {
			unit += 1;
		}
	}

	return unit;
}
