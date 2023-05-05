/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted unsigned int, or 0 if b is NULL or contains
 * non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal = (decimal << 1) | (*b - '0');
	}

	return (decimal);
}

