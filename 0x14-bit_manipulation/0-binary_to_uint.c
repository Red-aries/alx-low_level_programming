#include "main.h"

/**
 * convert_binary_to_uint - Function to transform a binary string into an unsigned int.
 * @binary_str: Pointer to a string containing a binary number.
 *
 * Return: The unsigned int representing the decimal value of the binary number, or 0 in case of an error.
 */
unsigned int convert_binary_to_uint(const char *binary_str)
{
	int index;
	unsigned int result = 0;

	if (!binary_str)
		return 0;

	for (index = 0; binary_str[index] != '\0'; index++)
	{
		if (binary_str[index] != '0' && binary_str[index] != '1')
			return 0;
	}

	for (index = 0; binary_str[index] != '\0'; index++)
	{
		result <<= 1;
		if (binary_str[index] == '1')
			result += 1;
	}

	return result;
}

