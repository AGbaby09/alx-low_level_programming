#include "main.h"
/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int tH = 0;

	while (tH < 3)
	{
		int oH = 0;

		while (oH < 10)
		{
			int tM = 0;

			while (tM < 6)
			{
				int oM = 0;

				while (oM < 10)
				{
					_putchar(tH + '0');
					_putchar(oH + '0');
					_putchar(':');
					_putchar(tM + '0');
					_putchar(oM + '0');
					_putchar('\n');
					oM++;
				}
				tM++;
			}
			oH++;
			if (tH == 2 && oH == 4)
			{
				break;
			}
		}
		tH++;
	}
}
