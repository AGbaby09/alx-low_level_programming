#include "main.h"
/**
 * puts2 - check the code.
 * @str: parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		_putchar(str[letter]);
		letter += 2;
	}
	_putchar('\n');
}
