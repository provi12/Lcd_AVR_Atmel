/*
 * lcd_lib.cpp
 *
 * Created: 02-06-2021 16:46:22
 * Author : Admin
 */ 
#define F_CPU 16000000UL	
#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"




int main(void)
{
	LCD_Init();
	LCD_String("hola");
	while(1);
	
}

