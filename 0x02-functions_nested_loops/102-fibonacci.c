#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description: Prints Fibonacci numbers up to the 50th term,
 * separated by commas and spaces.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibonacci1 = 0, fibonacci2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibonacci1 + fibonacci2;
		printf("%lu%s", sum, count == 49 ? "\n" : ", ");

		fibonacci1 = fibonacci2;
		fibonacci2 = sum;
	}

	return (0);
}
