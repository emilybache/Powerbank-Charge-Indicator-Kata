Powerbank Charge Indicator Kata
===============================

When your phone battery is dying, it's useful to have a powerbank to charge it with. A powerbank often has a very simple interface. A USB port to connect your charger cable, a USB port to connect to a power outlet, and four LEDs to indicate how full it is.

This kata is about implementing the logic to decide which of those LEDs to light up. The table below shows how many LEDs should be lit depending on the current amount of charge in the powerbank, as a percentage of full.
 

| # LEDs lighting up | % min power | % max power |
|
|--------------------|-------------|-------------|
| 0                  | 0           | 5           |
| 1                  | 25          | 45          |
| 2                  | 45          | 70          |
| 3                  | 70          | 95          |
| 4                  | 95          | 100         |

