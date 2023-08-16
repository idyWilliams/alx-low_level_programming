#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: Number of the times table (0 to 15)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, p;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;

			if (j > 0)
				_putchar(','), _putchar(' ');

			if (p < 10)
				_putchar(' '), _putchar(' '), _putchar(p + '0');
			else if (p < 100)
				_putchar(' '), _putchar(p / 10 + '0'), _putchar(p % 10 + '0');
			else
				_putchar(p / 100 + '0'), _putchar(p / 10 % 10 + '0'),
					_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
