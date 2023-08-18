#include "main.h"

/**
 * positive_or_negative - Checks if a number is positive, zero, or negative
 * @i: The number to check
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is Positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is Zero\n", i);
	}
	else
	{
		printf("%d is Negative\n", i);
	}
}
