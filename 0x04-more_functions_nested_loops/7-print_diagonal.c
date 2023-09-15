#include "main.h"
/**
 * print_diagonal - check the code
 * @n: parameter.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num = 0;

		while (num < n)
		{
			int sp = 0;

			while (sp < num)
			{
				_putchar(' ');
				sp++;
			}
			_putchar('\\');
			_putchar('\n');
			num++;
		}
	}
}
