#include "main.h"
/**
 * puts_half - check the code.
 * @str: parameter.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int count = 0;
	int half;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 != 0)
	{
		half = (count - 1) / 2;
	}
	else
	{
		half = count / 2;
	}

	while (half < count)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
