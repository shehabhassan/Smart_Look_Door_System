/*
 * keypad_config.h
 *
 * Created: 15/02/2020 07:44:34 م
 *  Author: sheha
 */ 


#ifndef KEYPAD-CONFIG_H_
#define KEYPAD-CONFIG_H_

#include <avr/io.h>

#define ROW0          0
#define ROW0_DIR      DDRB
#define ROW0_DATAOUT  PORTB

#define ROW1          1
#define ROW1_DIR      DDRB
#define ROW1_DATAOUT  PORTB

#define ROW2          2
#define ROW2_DIR      DDRB
#define ROW2_DATAOUT  PORTB

#define ROW3          3
#define ROW3_DIR      DDRB
#define ROW3_DATAOUT  PORTB

#define LINE0         4
#define LINE0_DIR     DDRB
#define LINE0_PULLUP  PINB
#define LINE0_DATAIN  PORTB

#define LINE1         5
#define LINE1_DIR     DDRB
#define LINE1_PULLUP  PINB
#define LINE1_DATAIN  PORTB

#define LINE2         6
#define LINE2_DIR     DDRB
#define LINE2_PULLUP  PINB
#define LINE2_DATAIN  PORTB

#define LINE3         7
#define LINE3_DIR     DDRB
#define LINE3_PULLUP  PINB
#define LINE3_DATAIN  PORTB

#endif /* KEYPAD-CONFIG_H_ */