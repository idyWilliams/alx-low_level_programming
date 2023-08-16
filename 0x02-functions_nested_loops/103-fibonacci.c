#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms.
 *
 * Description: Computes the sum of even-valued Fibonacci terms
 *              below 4 million.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long sum = 0, j = 1, k = 2, next;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
