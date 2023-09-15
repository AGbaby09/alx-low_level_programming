#include "main.h"
/**
 * print_square - check the code
 * @size: parameter.
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num = 0;

		while (num < size)
		{
			int nums = 0;

			while (nums < size)
			{
				_putchar('#');
				nums++;
			}
			_putchar('\n');
			num++;
		}
	}
}
