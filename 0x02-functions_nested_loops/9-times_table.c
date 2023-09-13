#include "main.h"
/**
*times_table - prints the nine times table.
*
*Return: Always 0.
*/
void times_table(void)
{
	int x9 = 0;

	while (x9 < 82)
	{
		_putchar(x9 + '0');
		x9 = x9 + 9;
	}
}
