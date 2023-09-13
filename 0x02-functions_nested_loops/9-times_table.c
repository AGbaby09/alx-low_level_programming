#include "main.h"
/**
*times_table - prints the nine times table.
*
*Return: Always 0.
*/
void times_table(void)
{
	int left = 0;

	while (left < 10)
	{
		int right = 0;

		while (right < 10)
		{
			int o, t;
			int product = left * right;

			if (product >= 10)
			{
				t = product / 10;
				o = product % 10;
				_putchar(t + '0');
				_putchar(o + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			if (right == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			right++;
		}
		left++;
	}
}
