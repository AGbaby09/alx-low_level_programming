#include "main.h"
/**
 * print_line - check the code
 * @n: parameter.
 * Return: Always 0.
 */
void print_line(int n)
{
	int num = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (num < n)
		{
			_putchar('_');
			num++;
		}
		_putchar('\n');
	}
}
