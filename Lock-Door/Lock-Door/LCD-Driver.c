/*
 * LCD_Driver.c
 *
 * Created: 19/02/2020 09:39:38 م
 *  Author: sheha
 */ 

#include "LCD.h"

#define F_CPU 16000000UL

int main(void)
{
    
	
	vLCD_Init();
	cLCD_String("SHEHAB");	 /* Write string on 1st line of LCD*/
	ucLCD_command(0x0C);     /* Go to 2nd line*/
	cLCD_String("HASSAN");	 /* Write string on 2nd line*/
	
    while(1)
    {   
		
	     
		//cLCD_String_LINE_ (1,2,'HI');
		//cLCD_String_LINE_(1,5,'shehab');
		//DDRD = 0xFF;
		//PORTD =0XFF;
		//TODO:: Please write your application code 
    }
}