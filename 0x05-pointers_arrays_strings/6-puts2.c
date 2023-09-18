#include "main.h"
/**
 * puts2 - check the code.
 * @str: parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int letter = 0;
	int letter2 = 0;

	while (str[letter] != '\0')
	{
		letter++;
	}

	while (letter2 < letter)
	{
		_putchar(str[letter2]);
		letter2 += 2;
	}
	_putchar('\n');
}
