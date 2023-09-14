#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 11)
	{
		int num = 0;

		while (num < 15)
		{
			int ch = num;

			if (num > 9)
			{
				_putchar('1');
				ch = num % 10;
			}
			_putchar(ch + '0');
			num++;
		}
		_putchar('\n');
		count++;
	}
}
