#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, bef1 = 1, bef2 = 2, aft1, aft2, sum = 2;

	printf("%lu, %lu", bef1, bef2);

	for (i = 3; i <= 98; i++)
	{
		aft1 = bef1 + bef2;
		aft2 = aft1 / 1000000000;
		aft1 %= 1000000000;
		bef1 = bef2;
		bef2 = aft1;

		if (aft2 != 0)
			printf(", %lu%09lu", aft2, aft1);
		else
			printf(", %lu", aft1);

		sum += aft2 * 1000000000 + aft1;
	}

	printf("\nSum: %lu\n", sum);

	return (0);
}
