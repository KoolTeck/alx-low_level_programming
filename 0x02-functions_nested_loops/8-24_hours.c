#include "main.h"

/**
 * jack_bauer - prints up to 24hr
 *
 * Return: On success always void.
 */

void jack_bauer(void)
{
int maxhr, hr, mins, sec, milsec;
maxhr = 58;
hr = '0';
while (hr < '3')
{
if (hr == '2')
{
maxhr = '4';
}
mins = '0';
while (mins < maxhr)
{
sec = '0';
while (sec < '6')
{
milsec = '0';
while (milsec < 58)
{
_putchar(hr);
_putchar(mins);
_putchar(':');
_putchar(sec);
_putchar(milsec);
_putchar('\n');
milsec++;
}
milsec = '0';
sec++;
}
sec = '0';
mins++;
}
mins = '0';
hr++;
}
}
