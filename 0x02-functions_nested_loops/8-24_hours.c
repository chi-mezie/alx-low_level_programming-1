#include "main.h"
/**
 * jack_bauer - A function that prints every minutes of the day
 *
 * @c: 
 *
 * Return: Time of minutes and hours
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
				}
			}
		}
	}

}