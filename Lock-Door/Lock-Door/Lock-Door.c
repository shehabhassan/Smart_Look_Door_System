/*
 * Lock_Door.c
 *
 * Created: 09/03/2020 04:33:49 م
 *  Author: sheha
 */ 


#include <avr/io.h>
#include "lcd.h"
#include "keypad.h"
#include "LEDs.h"

int main(void)
{ 
	LED0_DIR |= (1U<<LED0);	  		 
	 LCD_Init ();
	 unsigned char m[]={'1','2','3'};
	  LCD_Command(0x0C);
	//cLCD_String("SHEHAB");	 /* Write string on 1st line of LCD*/
         /* Go to 2nd line*/
	//cLCD_String("HASSAN");	 /* Write string on 2nd line*/
	LCD_String_xy (0,5,"shehab"); // 0 = write in first line , 1 = write in second line .
    LCD_String_xy (1,3,"Kimo abo nika");
    while(1)
    {
		vKeypadInit();
		ucKeypad_Scan();
		
		if (m[1] == '1')
		{
			LED0_DATA ^= (1u<<LED0);
			_delay_ms(50);
		}
				//TODO:: Please write your application code 
    }
}