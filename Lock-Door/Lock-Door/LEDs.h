/*
 * LEDs.h
 *
 * Created: 16/02/2020 10:10:34 ص
 *  Author: sheha
 */ 


#ifndef LEDS_H_
#define LEDS_H_


#define  LED0         0
#define  LED0_DIR    DDRA
#define  LED0_DATA   PORTA

#define  LED1        1
#define  LED1_DIR    DDRD
#define  LED1_DATA   PORTD

#define  LED2        2
#define  LED2_DIR    DDRD
#define  LED2_DATA   PORTD
  
// buttons 
  
#define  BUTTON0          0
#define  BUTTON0_DIR      DDRB
#define  BUTTON0_DATA     PORTB
#define  BUTTON0_PULLUP   PINB

#define  BUTTON1          4
#define  BUTTON1_DIR      DDRB
#define  BUTTON1_DATA     PORTB
#define  BUTTON1_PULLUP   PINB

#define  BUTTON2          2
#define  BUTTON2_DIR      DDRD
#define  BUTTON2_DATA     PORTD
#define  BUTTON2_PULLUP   PIND

#define OUTPUT_VALUE 1U

#endif /* LEDS_H_ */