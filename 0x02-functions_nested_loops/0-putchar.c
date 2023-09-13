#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char text[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0; i < 8; i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
