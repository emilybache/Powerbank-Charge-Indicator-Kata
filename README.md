Power Bank Charge Indicator Kata
=================================

When your phone battery is dying, it's useful to have a powerbank to charge it with. A powerbank often has a very simple interface. A USB port to connect your charger cable, a USB port to connect to a power outlet, and four LEDs to indicate how full it is.

This kata is about implementing the logic to decide which of those LEDs to light up. The table below shows how many LEDs should be lit depending on the current amount of charge in the powerbank, as a percentage of full.
 
| LEDs Bar State | % min power | % max power |
| -------------- | ----------- | ----------- |
| ▯▯▯▯           | 0           | 12          |
| ▮▯▯▯           | 13          | 37          |
| ▮▮▯▯           | 38          | 62          |
| ▮▮▮▯           | 63          | 87          |
| ▮▮▮▮           | 88          | 100         |

The starting code contains an interface to the hardware. It will let you switch each LED on and off. Your task is to implement a function 'update_charge_status' (or updateChargeStatus or similar) which takes an integer argument for the current percent charge in the powerbank, and should update the LEDs using the hardware interface.

The implementation of the LED hardware interface can only run on the real hardware, (and it is not included in this repo), so you will need to provide another implementation for your tests to use.
