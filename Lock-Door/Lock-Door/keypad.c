/*
 * keypad.c
 * Created: 15/02/2020 07:43:50 م
 *  Author: sheha
 */ 

#include "keypad.h"
#include "keypad-config.h"
 static const unsigned char g_keypad_map [4][4] = { 
	                                              {'1','2','3','S'},
											      {'4','5','6','T'},
												  {'7','8','9','E'},
												  {'E','0','C','D'}};

 static const unsigned char m[1]={'1'};
void vKeypadInit(void)
   {
	//set input 0 
	// set output 0 
	//set rows is output.
	ROW0_DIR |= (1U<<ROW0);   
	ROW1_DIR |= (1U<<ROW1);
	ROW2_DIR |= (1U<<ROW2);
	ROW3_DIR |= (1U<<ROW3);  
	// set lines is inputs.
	LINE0_DIR &=~ (1U<<LINE0);
	LINE1_DIR &=~ (1U<<LINE1);
	LINE2_DIR &=~ (1U<<LINE2);
	LINE3_DIR &=~ (1U<<LINE3);
	// LINES IS PULL-UP.
	LINE0_PULLUP |= (1U<<LINE0);
	LINE1_PULLUP |= (1U<<LINE1);
	LINE2_PULLUP |= (1U<<LINE2);
	LINE3_PULLUP |= (1U<<LINE3);
	//set rows state(1).
	ROW0_DATAOUT |= (NO_OUTPUT_STATE<<ROW0);
	ROW1_DATAOUT |= (NO_OUTPUT_STATE<<ROW1);
	ROW2_DATAOUT |= (NO_OUTPUT_STATE<<ROW2);
	ROW3_DATAOUT |= (NO_OUTPUT_STATE<<ROW3);
}

unsigned char ucKeypad_Scan(void){
	
	uint8_t row  = 0;
	uint8_t line = NO_VALID_INPUT;
	//unsigned char result = NO_VALID_INPUT;  
	// loop rows 
	  for(row =0; row<4;row++){
		//set the numbered rows to the output states (1)
			ROW0_DATAOUT |= (NO_OUTPUT_STATE<<ROW0);
			ROW1_DATAOUT |= (NO_OUTPUT_STATE<<ROW1);
			ROW2_DATAOUT |= (NO_OUTPUT_STATE<<ROW2);
			ROW3_DATAOUT |= (NO_OUTPUT_STATE<<ROW3);
	 //set the numbered rows to the output states (0)
	 switch(row){
	 case 0:ROW0_DATAOUT &=~(OUTPUT_STATE <<ROW0); break;
	 case 1:ROW1_DATAOUT &=~(OUTPUT_STATE <<ROW1); break;
	 case 2:ROW2_DATAOUT &=~(OUTPUT_STATE <<ROW2); break;
	 case 3:ROW3_DATAOUT &=~(OUTPUT_STATE <<ROW3); break;
	 default: break;
	 }	 
	 //check the inputs
	 if ( LINE0_DATAIN&(1U<<LINE0) == INPUT_STATE) {line =0;}
  else if( LINE1_DATAIN&(1U<<LINE1) == INPUT_STATE) {line =1;}
  else if( LINE2_DATAIN&(1U<<LINE2) == INPUT_STATE) {line =2;}
  else if( LINE3_DATAIN&(1U<<LINE3) == INPUT_STATE) {line =3;}
       else {; /* MISRA */ }
		//if there was valid input 
    if(line != NO_VALID_INPUT){
		// wait the until valid gone 
	while (INPUT_IS_STILL_VALID == INPUT_STATE);
	   // result 
	}	
	}
	return m;	
 }

