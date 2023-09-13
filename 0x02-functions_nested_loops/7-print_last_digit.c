#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer.
 * @number: print_last_digit parameter.
 * Return: Always 0.
 */
int print_last_digit(int number)
{
	if (number < 0)
	{
		number = (number % 10) * -1;
		_putchar(number + '0');
		return (number);
	}
	else
	{
		number = number % 10;
		_putchar(number + '0');
		return (number);
	}
}
