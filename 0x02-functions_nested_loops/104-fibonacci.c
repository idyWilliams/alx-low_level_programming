#include <stdio.h>

/**
 * main - Prints a sequence of Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long before = 1, after = 2;
	unsigned long billion = 1000000000;
	unsigned long before1, before2, after1, after2;

	printf("%lu", before);

	for (unsigned long i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = before / billion;
	before2 = before % billion;
	after1 = after / billion;
	after2 = after % billion;

	for (unsigned long i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / billion));
		printf("%lu", after2 % billion);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
