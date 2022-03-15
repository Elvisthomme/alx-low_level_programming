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
			_putchar(48 + (hour / 10));
			_putchar(48 + (hour % 10));
			_putchar(58);
			_putchar(48 + (hour / 10));
			_putchar(48 + (hour % 10));
			_putchar('\n');
		}
}
