/*
 * keypad.h
 *
 * Created: 15/02/2020 07:44:11 م
 *  Author: sheha
 */ 

#include "keypad-config.h"

#ifndef KEYPAD_H_
#define KEYPAD_H_

//macros
#define INPUT_STATE       0U
#define NO_OUTPUT_STATE   1U
#define OUTPUT_STATE      1U
#define NO_VALID_INPUT    0xFF

#define INPUT_IS_STILL_VALID   ( (LINE0_DATAIN&(1U<<LINE0))\
                               &&(LINE1_DATAIN&(1U<<LINE1))\
                               &&(LINE2_DATAIN&(1U<<LINE2))\
							   &&(LINE3_DATAIN&(1U<<LINE3)))  
//function prototypes .
  void vKeypadInit(void);
  unsigned char ucKeypad_Scan(void);						   
							   
#endif /* KEYPAD_H_ */