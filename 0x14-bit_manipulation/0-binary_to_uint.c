#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: contains the binary number
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
	{
		result <<= 1;
		if (b[i] == '1')
		{
			result += 1;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (result);
}
