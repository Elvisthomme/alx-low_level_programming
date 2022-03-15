#include "main.h"

/**
 * jack_bauer -  print every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		if (hour < 10)
		{
			_putchar(48);
			_putchar(48 + hour);
		}
		else
		{
			_putchar(48 + ((hour - hour % 10) / 10));
			_putchar(48 + (hour % 10));
		}
			_putchar(58);

		for (minute = 0; minute < 64; miute++)
		{
			if (hour < 10)
			{
				_putchar(48);
				_putchar(48 + hour);
			}
			else
			{
				_putchar(48 + ((hour - hour % 10) / 10));
				_putchar(48 + (hour % 10));
			}
			_putchar('\n');
		}
	}
}
