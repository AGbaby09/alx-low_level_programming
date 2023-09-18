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

	half = count / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
