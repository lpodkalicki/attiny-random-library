/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/25/45/85 16-bit PRNG (Pseudo Random Number Generator) library based on Galois LFSR algorithm.
 */

#ifndef	_ATTINY_RANDOM_H_
#define	_ATTINY_RANDOM_H_

#ifdef	USE_RANDOM_EEPROM_SEED
# define	RANDOM_EEPROM_SEED_ADDR	(0x00)
#endif	/* !USE_RANDOM_EEPROM_SEED */

void random_init(uint16_t seed);
uint16_t random(void);

#endif	/* !_ATTINY_RANDOM_H_ */
