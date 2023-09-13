#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}
