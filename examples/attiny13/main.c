/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Example project - Random Flickering LED.
 */

#include <avr/io.h>
#include <util/delay.h>
#include "random.h"

#define	LED_PIN	PB0


int
main(void)
{
	uint16_t n;

	/* setup */
	DDRB |= _BV(LED_PIN); // set LED pin as OUTPUT
	random_init(0xabcd); // initialise PRNG with 16-bit seed

	/* loop */
	while (1) {
		n = random(); // get random number
		if (n & 1) { // light up the LED for odd numbers
			PORTB |= _BV(LED_PIN);
		} else { // turn off the LED for even numbers
			PORTB &= ~_BV(LED_PIN);
		}
		_delay_ms(100);
	}
}
