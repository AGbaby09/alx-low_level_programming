#include "main.h"
/**
 * reverse_array - check the code
 * @a: param
 * @n: param
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c;

	while (b < (n / 2))
	{
		c = a[b];
		a[b] = *((a + (n - b)) - 1);
		*((a + (n - b)) - 1) = c;
		b++;
	}
}
