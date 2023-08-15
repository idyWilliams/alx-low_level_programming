#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');

		for (column = 1; column < 10; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
