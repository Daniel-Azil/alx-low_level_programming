 #include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @num: input of table n
 * Return: nothing.
 */

void print_times_table(int num)
{
	int row, col;
	int mult = 0;

	if (num <= 15 && num >= 0)
	{
		for (row = 0; row <= num; row++)
		{
			for (col = 0; col <= num; col++)
			{
				mult = (row * col);
				if (mult < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (col != num)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
