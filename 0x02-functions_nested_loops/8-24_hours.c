#include "main.h"

/**
 * jack_bauer -  print every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar(48);
				_putchar(48 + hour);
			}
			else
			{
				_putchar(48 + (hour / 10));
				_putchar(48 + (hour % 10));
			}
			_putchar(58);

			if (minute < 10)
			{
				_putchar(48);
				_putchar(48 + minute);
			}
			else
			{
				_putchar(48 + (hour / 10));
				_putchar(48 + (hour % 10));
			}
			_putchar('\n');
		}
}
