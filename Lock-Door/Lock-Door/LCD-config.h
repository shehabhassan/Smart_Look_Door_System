/*
 * LCD_config.h
 *
 * Created: 19/02/2020 09:40:58 م
 *  Author: sheha
 */ 



#ifndef LCD-CONFIG_H_
#define LCD-CONFIG_H_
#include <avr/io.h>
#include <util/delay.h>	
// define the pins for register select
#define R_S               1
#define R_S_DIR           DDRB
#define R_S_OUTPUT        PORTB
// define pins for read-write pin inside register 
#define R_W               2
#define R_W_DIR           DDRB
#define R_W_OUTPUT        PORTB
//define enable 
#define EN_pin            3
#define EN_DIR            DDRB
#define EN_OUTPUT         PORTB

// defines  Data pins. 
#define LCD_D4            4
#define LCD_D4_DIR        DDRA
#define LCD_D4_OUTPUT     PORTA

#define LCD_D5            5
#define LCD_D5_DIR        DDRA
#define LCD_D5_OUTPUT     PORTA

#define LCD_D6            6
#define LCD_D6_DIR        DDRA
#define LCD_D6_OUTPUT     PORTA

#define LCD_D7            7
#define LCD_D7_DIR        DDRA
#define LCD_D7_OUTPUT     PORTA
      
#endif /* LCD-CONFIG_H_ */